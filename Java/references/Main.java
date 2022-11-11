import refpkg.Reference;

class Main {

    public static void main(String args[]){

	Reference r = new Reference();
	Reference.changeVal(r);
	r.printCount();	
	
    }
}
