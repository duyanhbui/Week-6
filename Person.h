#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person{
    private:
        int salary;
        std :: string name;
    public:
    Person(int mySalary = 0, std :: string myName = "No Name");
    void setName(std :: string myName);
    void setSalary(int mySalary);
    std :: string getName();
    int getSalary();
};
#endif