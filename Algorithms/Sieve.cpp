vector<lld> sieve(lld n)
{
  bool v[n+1];
  std::vector<lld> prm;
  memset(v,true,n);
  v[1] = false;
  for(i=2;i*i<n;i++)
  {
    if(v[i])
      for(x=i*i;x<n;x+=i)
        v[x] = false;
  }
  for(i=2;i<n;i++)
  {
    if(v[i])
      prm.push_back(i);
  }
  return prm;
}
