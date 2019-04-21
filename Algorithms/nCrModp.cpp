lld nCr_Modp(lld n, lld r, lld p)
{
  lld c[r+1];
  memset(c,0,r+1);
  c[0] = 1;
  for(i=1;i<=n;i++)
  {
    for(j=min(i,r);j>0;j--)
      c[j] = (c[j] + c[j-1])%p;
  }
  return c[r];
}

int nCrModpLucas(int n, int r, int p)
{
   // Base case
   if (r==0)
      return 1;

   // Compute last digits of n and r in base p
   int ni = n%p, ri = r%p;

   // Compute result for last digits computed above, and
   // for remaining digits.  Multiply the two results and
   // compute the result of multiplication in modulo p.
   return (nCrModpLucas(n/p, r/p, p) * // Last digits of n and r
           nCrModpDP(ni, ri, p)) % p;  // Remaining digits
}

lld C (lld n, lld r)
{
  lld res = 1,i;
  if(r > n/2)
    r = n-r;
  for(i = 0; i < r; i++)
  {
    res *=  n;
    res /= i+1;
    n--;
  }
  return res;
}


// Returns n^(-1) mod p
int modInverse(int n, int p)
{
    return power(n, p-2, p);
}

// Returns nCr % p using Fermat's little
// theorem.
int nCrModPFermat(int n, int r, int p)
{
   // Base case
   if (r==0)
      return 1;

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    int fac[n+1];
    fac[0] = 1;
    for (int i=1 ; i<=n; i++)
        fac[i] = fac[i-1]*i%p;

    return (fac[n]* modInverse(fac[r], p) % p *
            modInverse(fac[n-r], p) % p) % p;
}
