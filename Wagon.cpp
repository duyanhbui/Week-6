#include <iostream>
#include "Wagon.h"
Wagon :: Wagon(){
    Capybara_records = new Capybara[cnt_seat];
}

bool Wagon :: addCapybara(Capybara newCapy){
    delete [] Capybara_records;
    Capybara_records = new Capybara[cnt_seat];       
    if (cnt_seat > wagon_size){
        return false;
    }else{
        cnt_seat += 1;
     
        *(Capybara_records + cnt_seat -1) = newCapy;
        return true;
        
        
    }
}

void Wagon :: emptyWagon(){
    cnt_seat = 0;
    delete [] Capybara_records;
    Capybara_records = new Capybara[cnt_seat];
}

void Wagon ::printCapybaras(){
    for(int i = 0; i < cnt_seat; i++){
        if (cnt_seat > wagon_size){
            std :: cout << "oops cannot add capybara:" << (Capybara_records + i) ->getName() << " of age " <<(Capybara_records + i) -> getAge() << std :: endl;
        }else{
            std:: cout << (Capybara_records + i) ->getName() << " " <<(Capybara_records + i) -> getAge() << std :: endl;
        }
        
    }


}