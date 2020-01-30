#include "Pets.h"
#include <iostream>
#include <string>

//default constructor
Pets::Pets(){
  m_name = "Otis";
  m_age = 3;
  m_type = "dog";
  m_weight = 200;
}

//overloaded constructor
Pets::Pets(string name, int age, string type, double weight){
  m_name = name;
  m_age = age;
  m_type = type;
  m_weight = weight;
}

//print info of pets
void Pets::printInfo(){
  cout << "Name: " << m_name << endl;
  cout << "Age: " << m_age << endl;
  cout << "Type: " << m_type << endl;
  cout << "Weight: " << m_weight << endl;
  cout << endl;
}

//setters and getters
void Pets::setName(string name){
  m_name = name;
}
string Pets::getName(){
  return m_name;
}

void Pets::setAge(int age){
  m_age = age;
}
int Pets::getAge(){
  return m_age;
}

void Pets::setType(string type){
  m_type = type;
}
string Pets::getType(){
  return m_type;
}

void Pets::setWeight(double weight){
  m_weight = weight;
}
double Pets::getWeight(){
  return m_weight;
}
