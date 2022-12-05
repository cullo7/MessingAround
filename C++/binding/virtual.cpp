#include <iostream>

using namespace std;

class SuperClass {
public:
  virtual void print(){
    cout << "Printing from parent class" << endl;
  }
};

class SubClass : public SuperClass {
public:
  void print(){
    cout << " Printing  from subclass" << endl;
  }
};

int main(){
  SuperClass sup;
  sup.print();
  SubClass sub;
  sub.print();
  SuperClass * sup_ptr = new SuperClass;
  SuperClass * sub_ptr = new SubClass;
  sup_ptr->print();
  sub_ptr->print();
  return 0;
}
