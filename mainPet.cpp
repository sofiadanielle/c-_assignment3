#include "pet.h"

int main(int argc, char ** argv){
  Pet *p = new Pet("Luna", 2, "Cat", 12);
  Pet *p2 = new Pet("Kona", 1, "Dog", 5);

  p->setName("foobar");
  cout << "My name is: " << p->getName() << endl;
  cout << "My name is: " << p2->getName() << endl;

  cout << "Address of P: " << p << endl;
  cout << "Address of P2: " << p2 << endl;

  delete p;
  delete p2;
}
