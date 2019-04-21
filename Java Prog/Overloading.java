class OverloadDemo
{
  void test()
  {
    System.out.println("No parameters");
  }
  void test(int a)
  {
    System.out.println("a: " + a);
  }
  void test(int a, int b)
  {
    System.out.println("a and b: " + a + " " + b);
  }
  double test(double a)
  {
    System.out.println("double a: " + a); return a*a;
  }
}

//constructor overloading
class Box
{
  double width, height, depth;
  Box(double w, double h, double d)
  {
    width = w; height = h; depth = d;
  }
  Box()
  {
    width = -1; height = -1; depth = -1;
  }
  Box(double len)
  {
    width = height = depth = len;
  }
  double volume()
  {
    return width * height * depth;
  }
}
