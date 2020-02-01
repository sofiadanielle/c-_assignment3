#include <iostream>
#include <string>
using namespace std;

class Pet{
  public:
    Pet(); //constructor
    Pet(string name, int age, string type, double weight); //overloaded constructor

    //accessors -> getter
    string getName();
    int getAge();
    string getType();
    double getWeight();

    //mutators -> setters!
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

  private:
    //attributes of the object
    string name;
    unsigned int age;
    string type;
    double weight;
};
