//Extended Euclid
lld d,x,y;

void extEuclid(lld a,lld b)
{
  if(b==0)
  {
    d = a;
    x = 1;
    y = 0;
  }
  else
  {
    extEuclid(b,a%b);
    lld temp;
    temp = x;
    x = y;
    y = temp - (a/b)*y;
  }
}
