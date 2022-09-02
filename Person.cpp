#include <iostream>
#include <string>
#include "Person.h"

Person :: Person(int mySalary, std :: string myName){
    salary = mySalary;
    name = myName;
}

void Person :: setName(std :: string myName){
    name = myName;
}
void Person :: setSalary(int mySalary){
    salary = mySalary;
}
std :: string Person :: getName(){
    return name;
}

int Person :: getSalary(){
    return salary;
}