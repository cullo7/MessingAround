class Main {

    public static void test(Node n){
	Node n1 = new Node(2);
	n.next = n1;
    }

    public static class Node{
	int val;
	Node next;
	Node(int num){ val = num;}
    }

    public static void print(Node n){
	while(n != null){
	    System.out.println(n.val);
	    n = n.next;
	}
    }
    
    public static void main(String args[]){

	Main.Node n = new Main.Node(1);
	Main.test(n);
	Main.print(n);
	
    }
}
