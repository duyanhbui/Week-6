#include <iostream>
#include "Wagon.h"
Wagon :: Wagon(){
    Capybara_records = new Capybara[wagon_size];
}

bool Wagon :: addCapybara(Capybara newCapy){
    if (cnt_seat > wagon_size){
        return false;
    }else{
        cnt_seat += 1;
        *(Capybara_records + cnt_seat -1) = newCapy;
        if (cnt_seat == wagon_size){
            return false;
        }else{
            return true;
        }
        
    }
}

void Wagon :: emptyWagon(){
    cnt_seat = 0;
    delete [] Capybara_records;
    Capybara_records = new Capybara[wagon_size];
}

void Wagon ::printCapybaras(){
    for(int i = 0; i < cnt_seat; i++){
        std:: cout << (Capybara_records + i) ->getName() << " " <<(Capybara_records + i) -> getAge() << std :: endl;
    }
}