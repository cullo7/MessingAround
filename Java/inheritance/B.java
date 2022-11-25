public class B extends A { 
 
    protected int a = 20; 
 
    public B() { 
        super(); 
        System.out.println("B::constructor"); 
    } 
 
    @Override 
    public void method() { 
        System.out.println("B::method() a = " + a); 
    } 
} 
