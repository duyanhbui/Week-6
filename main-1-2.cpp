#include <iostream>
#include <string>
#include "Person.cpp"

int main(){
    Person* array_of_person = new Person[5];
    int salary[5] = {1000,900,800,700};
    std :: string name[5] = {"Roland","Noe","Vanitas","Jeanne","Dominique"};
    for(int i = 0; i< 5;i++){
        *(array_of_person + i) = Person(salary[i],name[i]);
        std :: cout << (array_of_person + i) ->getName() << " " << (array_of_person + i) ->getSalary() << std :: endl;
    }
    
    int new_salary[5] = {1001,901,801,701};
    std :: string new_name[5] = {"John","Josh","Ollie","Chris","Charles"};
    for(int i = 0; i< 5;i++){
        *(array_of_person + i) = Person(new_salary[i],new_name[i]);
        std :: cout << (array_of_person + i) ->getName() << " " << (array_of_person + i) ->getSalary() << std :: endl;
    }
}