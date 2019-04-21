#include <stdio.h>
#include<graphics.h>

float dot(float *, float *);
void MtimesV(float [4][4], float *, float *);
void hermite_coeffs(float,float,float,float,float,float,float *);
float hermite(float *, float, float, float);
float  hermitemat[4][4]   = {{ 1, 0, 0, 0},
            { 0, 0, 1, 0},
            {-3, 3,-2,-1},
            { 2,-2, 1, 1} };


float dot(float *a, float *b){
  return a[0]*b[0]+a[1]*b[1]+a[2]*b[2]+a[3]*b[3];
}

void MtimesV(float m[4][4], float *v, float *dst){
  int i,j;
  for(i=0;i<4;i++){
    dst[i]=0;
    for(j=0;j<4;j++)
      dst[i] += m[i][j]*v[j];
  }
}
void  hermite_coeffs(float t0, float t1, float y0, float y1, float ydot0, float ydot1, float *coeffs){
  float g[4];
  g[0]=y0; g[1]=y1; g[2]=ydot0*(t1 - t0);g[3]=ydot1*(t1 - t0);
  MtimesV(hermitemat,g,coeffs);
}
float hermite(float *coeffs, float t, float t0, float t1){
  float U[4] ;
  float u = (t - t0)/(t1 -t0);
  U[0] = 1 ; U[1] = u ;   U[2] = u*u ;    U[3] = u*u*u ;
  return dot(U,coeffs);
}

main(){
  float coeffs[4];
  float t0 = 0, t1 = 30;    /*  time interval */
  float y0 = 100,  y1 = 160;    /* start/stop values */
  float dy0 = .2, dy1 = 0;    /* start/stop speeds */
  int t;


hermite_coeffs(t0,t1,y0,y1,dy0,dy1,coeffs);
int gd=DETECT;
int gm;
initgraph(&gd,&gm,NULL);
for(t=0;t<31;t++){
float z=hermite(coeffs, (float) t, t0, t1) ;
putpixel(t,z,1);}
delay(1000);
closegraph();
return 0;

}
