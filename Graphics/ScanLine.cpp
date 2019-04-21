#include<stdio.h>
#include<graphics.h>

int check(int x1,int y1,int x2,int y2,int y)
{
   if(!((y<y1&&y>y2)||(y>y1&&y<y2))) return -1;
   return (x2-((1.0*(y2-y))/(y2-y1))*(x2-x1));
}

void so(int xx[],int k)
{ int i,j,q;
  for(i=0;i<k;i++)
  for(j=i+1;j<k;j++)
  if(xx[j]<xx[i])  { q=xx[j]; xx[j]=xx[i]; xx[i]=q; }
}

void poly(int x[5],int y[5])
{ int ymin=1000,ymax=0,i;
  for(i=0;i<5;i++) { if(y[i]<ymin) ymin=y[i]; if(y[i]>ymax) ymax=y[i]; }
  int xx[10],k=0;

  for(i=ymin+1;i<ymax;i++)
  {  int j=0;
     for(j=0;j<5;j++)
    {
      int a=check(x[j],y[j],x[(j+1)%5],y[(j+1)%5],i);
      if(a!=-1) { xx[k]=a; k++; }
    }
    so(xx,k);
    for(j=0;j<k;j+=2)
    line(xx[j],i,xx[j+1],i);  delay(100);
    k=0;
  }

}

int main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
 int x[5]={50,150,150,100,50},y[5]={150,150,50,100,50};

 poly(x,y);
 getch();
 closegraph();
return 0;
}
