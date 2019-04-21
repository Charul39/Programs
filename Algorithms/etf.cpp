//Euler Totient Function
etf(lld n)
{
  lld result = n;
  for(lld  p =2;p*p<=n;p++)
  {
    if(n%p==0)
    {
      while(n%p==0)
        n = n/p;
      result -= result/p;
    }
    if(n>1)
      result /= n;
  }
  return result;
}
