class OuterClass {

    static String outerField = "Outerfield";
    static String staticOuterField = "Static outerField";

    public void accessMembers(){

	System.out.println("In OuterClass ..");
	
	StaticInnerClass sic = new StaticInnerClass();

	System.out.println(sic.innerStaticField);
	//System.out.println(InnerClass.innerField);

    }
    
    class InnerClass {

	public String innerField = "Innerfield";

	public void accessMembers(){

	    System.out.println("In InnerClass ..");
	    
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

	    System.out.println("In StaticInnerClass....");
	    // error accessing non-static var referenced from stat context
	    //System.out.println(outerField);
	    System.out.println(staticOuterField);

	}

	public void testAccess(OuterClass oc){
	    
	    System.out.println(oc.outerField);

	}
	
    }

    public static void main(String args []){

	//OuterClass testing
	OuterClass outerclass = new OuterClass();
	outerclass.accessMembers();


	//InnerClass testing
	OuterClass.InnerClass innerclass =  outerclass.new InnerClass();
	innerclass.accessMembers();
	
	//StaticInnerClass testing
	StaticInnerClass staticinnerclass = new StaticInnerClass();
	staticinnerclass.accessMembers();

	staticinnerclass.testAccess(outerclass);
	
    }
}
