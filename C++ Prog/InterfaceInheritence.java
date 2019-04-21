interface A {
void meth1();
void meth2();
}

B extends A:
interface B extends A {
void meth3();
}
//MyClass must implement all of A and B methods:
class MyClass implements B {
public void meth1() {
System.out.println("Implement meth1().");
}
public void meth2() {
System.out.println("Implement meth2().");
}
public void meth3() {
System.out.println("Implement meth3().");
} }
//Create a new MyClass object, then invoke all interface methods on it:
class IFExtend {
public static void main(String arg[]) {
MyClass ob = new MyClass();
ob.meth1();
ob.meth2();
ob.meth3();
}
}
