class Factorial
{
  int fact(int n)
  {
    if (n==1) return 1;
    return fact(n-1) * n;
  }
}

class Recursion
{
  public static void main(String args[])
  {
    Factorial f = new Factorial();
    System.out.print("Factorial of 5 is ");
    System.out.println(f.fact(5));
  } 
}
