class Box
{
  private double width, height, depth;
  Box(double w, double h, double d)
  {
    width = w;
    height = h;
    depth = d;
  }
  Box(Box ob)
  {
    width = ob.width;
    height = ob.height;
    depth = ob.depth;
  }
  double volume()
  {
     return width * height * depth;
  }
}
class BoxWeight extends Box
{
  double weight;
  BoxWeight(BoxWeight ob)
  {
    super(ob); //Super Accessing constructor of Super class
    weight = ob.weight;
  }
  BoxWeight(double w, double h, double d, double m)
  {
    super(w, h, d); weight = m;
  }
}
class Ship extends BoxWeight
{
  double cost;
  Ship(Ship ob)
  {
    super(ob);
    cost = ob.cost;
  }
  Ship(double w, double h,double d, double m, double c)
  {
    super(w, h, d, m);
    cost = c;
  }
}
class DemoShip
{
  public static void main(String args[])
  {
    Ship ship1 = new Ship(10, 20, 15, 10, 3.41);
    Ship ship2 = new Ship(2, 3, 4, 0.76, 1.28);
    double vol;
    vol = ship1.volume();
    System.out.println("Volume of ship1 is " + vol);
    System.out.print("Weight of ship1 is”);
    System.out.println(ship1.weight);
    System.out.print("Shipping cost: $");
    System.out.println(ship1.cost);
    vol = ship2.volume();
    System.out.println("Volume of ship2 is " + vol);
    System.out.print("Weight of ship2 is “);
    System.out.println(ship2.weight);
    System.out.print("Shipping cost: $“);
    System.out.println(ship2.cost);
  }
}
