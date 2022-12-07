public class Main {
    public class Test {
	Test t;
    }
    public static void main(String [] args){
	Test t1;
	Test t2 = t1; // error because t1 is uninitialized
    }
}
