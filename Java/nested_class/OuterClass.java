class OuterClass {

    public String outerField = "Outerfield";
    static String staticOuterField = "Static outerField";

    public void accessMembers(){

	System.out.println(innerStaticField);
	System.out.println(innerField);

    }
    
    class InnerClass {

	public String innerField = "Innerfield";

	public void accessMembers(){

	    System.out.println(outerField);
	    System.out.println(staticOuterField);

	} 

    }

    static class StaticInnerClass {

	public String innerStaticField = "InnerStaticField";

	public void staticMethod(){

	    System.out.println("In StaticInnerClass.publicMethod()");

	}

	public void accessMembers(){

	    System.out.println(outerField);
	    System.out.println(staticOuterField);

	}   
	
    }

    public static void main(String args []){

	//OuterClass testing
	OuterClass outerclass = new OuterClass();
	outerclass.accessMembers();


	//InnerClass testing
	InnerClass innerclass =  new InnerClass();
	innerclass.accessMembers();
	
	//StaticInnerClass testing
	StaticInnerClass staticinnerclass = new StaticInnerClass();
	staticinnerclass.accessMembers();
	
	
    }
}
