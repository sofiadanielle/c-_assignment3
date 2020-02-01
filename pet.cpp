#include "pet.h"

Pet::Pet(){
  //intialize varibales to default values
  name = " ";
  age = 0;
  type = " ";
  weight = 0;
}

Pet::Pet(string name, int age, string type, double weight){
  name = name;
  age = age;
  type = type;
  weight = weight;
}

string Pet::getName(){
  return name;
}

int Pet::getAge(){
  return age;
}

string Pet::getType(){
  return type;
}

string Pet::getWeight(){
  return weight;
}

void Pet::setName(string name){
  name = name;
}

void Pet::setAge(int age){
  age = age;
}

void Pet::setType(string type){
  type = type;
}

void Pet:: setWeight(double weight){
  weight = weight;
}
