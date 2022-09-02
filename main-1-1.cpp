#include <iostream>
#include "Capybara.h"

int main(){
    Capybara* array_of_capybaras = new Capybara[4];
    int age[4] = {1,2,3,4};
    std :: string name[4] = {"Roland","Noe","Vanitas","Jeanne"};
    for(int i = 0; i< 4;i++){
        (array_of_capybaras + i)-> setName(name[i]);
        (array_of_capybaras + i)-> setAge(age[i]);
        std :: cout << (array_of_capybaras + i) ->getName() << " " << (array_of_capybaras + i) ->getAge() << std :: endl;
    }
}