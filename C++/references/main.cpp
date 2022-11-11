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
  int count;

  Node(){
    next = nullptr;
    std::cout << "default constructor" << std::endl;
    count = 0;
  }

  Node(int a){

    count = a;

  }
  
  void increment(){
    count++;
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


void Add5Nodes(Node*& head){

  for(int i = 0; i < 5; i++){
    Node* n = new Node();
    n->next = head;
    head = n;
  }

}

void AddNode(Node*& head){
  Node* newptr = new Node();
  newptr->next = head;
  head = newptr;
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
  
void printVals(Node* ptr){
  while(ptr){
    std::cout << "ptr->count " << ptr->count <<std::endl;
    ptr = ptr->next;
  }
}

int main(){

  Ref ref;
  Node* headptr = new Node();
  Add5Nodes(headptr);
  ListSize(headptr);
  //  recurse(ref, headptr);
  delete headptr;
  return 0;


}
