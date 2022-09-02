#include <iostream>
#include <vector>
#include "Capybara.h"
#include "Wagon.h"

bool Wagon::addCapybara(Capybara newCapy) {
    if (Capybara_record.size() >= wagon_size) {
        return false;
    } else {
        Capybara_record.push_back(newCapy);
    }
    return true;
    
}

void Wagon::emptyWagon() {
    Capybara_record.clear();
}

void Wagon::printCapybaras() {
for (int j = 0; j < Capybara_record.size(); j++) {
    std :: cout << Capybara_record.at(j).getName() << " " << Capybara_record.at(j).getAge() << std :: endl;
    }
}