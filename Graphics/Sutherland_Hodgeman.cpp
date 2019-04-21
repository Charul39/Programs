#include <stdio.h>
#include <graphics.h>
//#include <conio.h>
#include <math.h>
//#include <process.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int oc;
oc Comp_oc(float x,float y);
enum  {  TOP = 0x1,
BOTTOM = 0x2,
RIGHT = 0x4,
LEFT = 0x8
};
float xmin,xmax,ymin,ymax;
void clip(float x0,float y0,float x1,float y1)
{
oc oc0,oc1,ocOut;
int accept = FALSE,done = FALSE;
oc0 = Comp_oc(x0,y0);
oc1 = Comp_oc(x1,y1);
do
{
    if(!(oc0|oc1))
    {
        accept = TRUE;
        done = TRUE;
    }
    else if(oc0 & oc1)
        done = TRUE;
    else
    {
        float x,y;
        ocOut = oc0?oc0:oc1;
        if(ocOut & TOP)
        {
            x = x0+(x1-x0)*(ymax-y0)/(y1-y0);
            y = ymax;
        }
        else if(ocOut & BOTTOM)
        {
            x = x0+(x1-x0)*(ymin-y0)/(y1-y0);
            y = ymin;
        }
        else if(ocOut & RIGHT)
        {
            y = y0+(y1-y0)*(xmax-x0)/(x1-x0);
            x = xmax;
        }
        else
        {
            y = y0+(y1-y0)*(xmin-x0)/(x1-x0);
            x = xmin;
        }
        if(ocOut==oc0)
        {
            x0 = x;
            y0 = y;
            oc0 = Comp_oc(x0,y0);
        }
        else
        {
            x1 = x;
            y1 = y;
            oc1 = Comp_oc(x1,y1);
          }
    }
}while(done==FALSE);
if(accept)
    line(x0,y0,x1,y1);
outtextxy(150,20,"POLYGON AFTER CLIPPING");
rectangle(xmin,ymin,xmax,ymax);
}
oc Comp_oc(float x,float y)
{
    oc code = 0;
    if(y>ymax)
        code|=TOP;
    else if(y<ymin)
            code|=BOTTOM;
    if(x>xmax)
        code|=RIGHT;
    else if(x<xmin)
        code|=LEFT;
    return code;
}
int main( )
{
float x1,y1,x2,y2;
/* request auto detection */
int gdriver = DETECT, gmode, n,poly[14],i;
//clrscr( );
printf("Enter the no of sides of polygon:");
scanf("%d",&n);
printf("\nEnter the coordinates of polygon\n");
for(i=0;i<2*n;i++)
{
    scanf("%d",&poly[i]);
}
poly[2*n]=poly[0];
poly[2*n+1]=poly[1];
printf("Enter the rectangular coordinates of clipping window\n");
scanf("%f%f%f%f",&xmin,&ymin,&xmax,&ymax);
/* initialize graphics and local variables */
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

outtextxy(150,20,"POLYGON BEFORE CLIPPING");
drawpoly(n+1,poly);
rectangle(xmin,ymin,xmax,ymax);
//getch( );
delay(5000);
cleardevice( );
for(i=0;i<n;i++)
clip(poly[2*i],poly[(2*i)+1],poly[(2*i)+2],poly[(2*i)+3]);
//getch( );
sleep(10);
restorecrtmode( );
return 0;
}
