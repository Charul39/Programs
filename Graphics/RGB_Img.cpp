#include<bits/stdc++.h>
//#include<graphics.h>
using namespace std;

int R[201][201],G[201][201],B[201][201];

void circleBres(int xc, int yc, int r)
{
	int x = 0, y = r;
  int d = 3 - 2 * r;
	R[xc+x][yc+y] = 200;	G[xc+x][yc+y] = 50;	B[xc+x][yc+y] = 10;
	R[xc+x][yc-y] = 200;	G[xc+x][yc-y] = 50;	B[xc+x][yc-y] = 10;
	R[xc-x][yc+y] = 200;	G[xc-x][yc+y] = 50;	B[xc-x][yc+y] = 10;
	R[xc-x][yc-y] = 200;	G[xc-x][yc-y] = 50;	B[xc-x][yc-y] = 10;
	R[xc+y][yc+x] = 200;	G[xc+y][yc+x] = 50;	B[xc+y][yc+x] = 10;
	R[xc+y][yc-x] = 200;	G[xc+y][yc-x] = 50;	B[xc+y][yc-x] = 10;
	R[xc-y][yc+x] = 200;	G[xc-y][yc+x] = 50;	B[xc-y][yc+x] = 10;
	R[xc-y][yc-x] = 200;	G[xc-y][yc-x] = 50;	B[xc-y][yc-x] = 10;
  while (y >= x)
  {
    x++;
		if (d > 0)
    {
     	y--;
     	d = d + 4 * (x - y) + 10;
    }
    else
      d = d + 4 * x + 6;
		R[xc+x][yc+y] = 200;	G[xc+x][yc+y] = 50;	B[xc+x][yc+y] = 10;
		R[xc+x][yc-y] = 200;	G[xc+x][yc-y] = 50;	B[xc+x][yc-y] = 10;
		R[xc-x][yc+y] = 200;	G[xc-x][yc+y] = 50;	B[xc-x][yc+y] = 10;
		R[xc-x][yc-y] = 200;	G[xc-x][yc-y] = 50;	B[xc-x][yc-y] = 10;
		R[xc+y][yc+x] = 200;	G[xc+y][yc+x] = 50;	B[xc+y][yc+x] = 10;
		R[xc+y][yc-x] = 200;	G[xc+y][yc-x] = 50;	B[xc+y][yc-x] = 10;
		R[xc-y][yc+x] = 200;	G[xc-y][yc+x] = 50;	B[xc-y][yc+x] = 10;
		R[xc-y][yc-x] = 200;	G[xc-y][yc-x] = 50;	B[xc-y][yc-x] = 10;
  }
}

void ellipse(int rx, int ry, int xc, int yc)
{
    float dx, dy, d1, d2;
		int x, y;
    x = 0;
    y = ry;
    d1 = (ry * ry) - (rx * rx * ry) +  (0.25 * rx * rx);
    dx = 2 * ry * ry * x;
    dy = 2 * rx * rx * y;
    while (dx < dy)
    {
				R[x+xc][y+yc] = 10; G[x+xc][y+yc] = 200; B[x+xc][y+yc] = 50;
				R[-x+xc][y+yc] = 10; G[-x+xc][y+yc] = 200; B[-x+xc][y+yc] = 50;
				R[x+xc][-y+yc] = 10; G[x+xc][-y+yc] = 200; B[x+xc][-y+yc] = 50;
				R[-x+xc][-y+yc] = 10; G[-x+xc][-y+yc] = 200; B[-x+xc][-y+yc] = 50;
        if (d1 < 0)
        {
            x++;
            dx = dx + (2 * ry * ry);
            d1 = d1 + dx + (ry * ry);
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d1 = d1 + dx - dy + (ry * ry);
        }
    }
    d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5))) +  ((rx * rx) * ((y - 1) * (y - 1))) - (rx * rx * ry * ry);
    while (y >= 0)
    {
				R[x+xc][y+yc] = 10; G[x+xc][y+yc] = 200; B[x+xc][y+yc] = 50;
				R[-x+xc][y+yc] = 10; G[-x+xc][y+yc] = 200; B[-x+xc][y+yc] = 50;
				R[x+xc][-y+yc] = 10; G[x+xc][-y+yc] = 200; B[x+xc][-y+yc] = 50;
				R[-x+xc][-y+yc] = 10; G[-x+xc][-y+yc] = 200; B[-x+xc][-y+yc] = 50;
				if (d2 > 0)
        {
            y--;
            dy = dy - (2 * rx * rx);
            d2 = d2 + (rx * rx) - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d2 = d2 + dx - dy + (rx * rx);
        }
    }
}

void ff(int x, int y, int oldr, int oldg, int oldb, int newr, int newg, int newb)
{
	if(x>=0 && x<=200 && y>=0 && y<=200 && R[x][y]!=newr && G[x][y]!=newg && B[x][y]!=newb)
	{
		R[x][y] = newr; G[x][y] = newg; B[x][y] = newb;
		ff(x+1,y,oldr,oldg,oldb,newr,newg,newb);
		ff(x,y+1,oldr,oldg,oldb,newr,newg,newb);
		ff(x-1,y,oldr,oldg,oldb,newr,newg,newb);
		ff(x,y-1,oldr,oldg,oldb,newr,newg,newb);
	}
}

int main()
{
	for(int i=0;i<=200;i++)
		for(int j=0;j<=200;j++)
		{
			R[i][j] = 50;	G[i][j] = 10;	B[i][j] = 200;
		}
	ellipse(35,50,100,100);
	ff(100,100,50,10,200,10,200,50);
	circleBres(100,100,25);
	ff(100,100,50,10,200,200,50,10);
	ofstream op("q1.ppm");
	//ofstream op("q.txt");
	op << "P3# CREATOR: GIMP PNM Filter Version 1.1" << endl;
	op << "200 200" << endl;
	op << "255" << endl;
	for(int i=1;i<=200;i++)
	{
		for(int j=1;j<=200;j++)
			op << R[i][j] << " " << G[i][j] << " " << B[i][j] << "\t";
		op << endl;
	}
	op.close();
	cout << "DONE\n";
	return 0;
}
