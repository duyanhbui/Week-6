#include <iostream>
#include "Wagon.h"

int main(){
    Wagon w1;
    
    Capybara* array_of_capybaras = new Capybara[5];
    int age[5] = {1,2,3,4,5};
    std :: string name[5] = {"Roland","Noe","Vanitas","Jeanne","Domi"};
    for(int i = 0; i< 5;i++){
        (array_of_capybaras + i)-> setName(name[i]);
        (array_of_capybaras + i)-> setAge(age[i]);
    }
    for(int j = 0; j< 5;j++){
        if (w1.addCapybara(array_of_capybaras[j]) == false){
            std :: cout << "The wagon is full" << std :: endl;
        }
    }
}