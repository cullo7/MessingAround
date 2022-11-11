#include <iostream>

class Ref
{

public:
  int counter;

  Ref(){
    counter = 0;
  }
  
};

class Node {

public:
  Node* next;

  Node(){
    next = nullptr;
    std::cout << "default constructor" << std::endl;
  }

};

void recurse(Ref r, Node* n){

  std::cout << "recurse" << std::endl;
  if(n != nullptr){
    recurse(r, n->next);
  }

  r.counter++;
  std::cout << "r.counter: " << r.counter << std::endl;

}


void Add5Nodes(Node* head){

  for(int i = 0; i < 5; i++){
    Node* n = new Node();
    n->next = head;
    head = n;
  }

}

void FreeAllNodes(Node* head){
  Node* node = nullptr;
  while(head){
    node = head->next;
    delete head;
  }
  
}

void ListSize(Node* ptr){
  int size= 0;
  while(ptr){
    size++;
    ptr = ptr->next;
  }
  std::cout << "size of list: " << size <<  std::endl;
}
  
void test(Ref *refptr){
  refptr->counter++;
}

int main(){

  Ref ref;
  Node* headptr = new Node();
  printf("%p\n", headptr);
  Add5Nodes(headptr);
  ListSize(headptr);
  printf("%p\n", headptr);
  recurse(ref, headptr);
  delete headptr;
  return 0;
}
