int main()
{
  int xmin,xmax,ymin,ymax;
  int x1,x2,y1,y2;
  int dx=x2-x1, dy=y2-y1;
  int p[4] = {-dx,dx,-dy,dy};
  int q[4] = {x1-xmin, xmax-x1, y1-ymin, ymax-y1};
  for(i=0;i<4;i++)
  {
    if(p[i]==0)
    {
      if(q[i]>=0)
      {
        if(i<2)
        {
          if(y1<ymin)
            y1 = ymin;
          if(y2>ymax)
            y2 = ymax;
          line(x1,y1,x2,y2);
        }
        if(i>1)
        {

        }
      }
    }
  }
  int t1=0,t2=1;
  for(i=0;i<4;i++)
  {
    temp = q[i]/p[i];
    if(p[i]<0)
    {
      t1 = max(t1,temp);
      t2 = min(t2,temp);
    }
  }
  if(t1<t2)
  {
    xx1 = x1 + t1*p[0];
    xx2 = x1 + t2*p[0];
    yy1 = y1 + t1*p[3];
    yy2 = y1 + t2*p[3];
  }
}
