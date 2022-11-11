package refpkg;

public class Reference {

    public int value = 0;


    public void printCount(){
	System.out.println(value);
    }

    public static void changeVal(Reference r){
	r.value++;
    }
    
}

