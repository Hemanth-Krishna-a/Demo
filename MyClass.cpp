#include "MyClass.h"
#include <iostream>

void MyClass::printAge(){
    std::cout<<age;
}

void MyClass::printName(){
    std::cout<<name<<std::endl;
}

void MyClass::setAge(int a){
    age = a;
}

void MyClass::setName(const std::string s){
    name = s;
}

