public class A { 
 
    protected int a = 10; 
    public A() { 
        System.out.println("A::constructor"); 
        method(); 
    } 
 
    public void method() { 
        System.out.println("A::method(): a = " + a); 
    } 
}
