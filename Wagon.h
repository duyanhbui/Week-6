#pragma once
#include <iostream>
#include <vector>
#include "Capybara.h"

class Wagon {
    private:
        int wagon_size = 4;
        std :: vector<Capybara> Capybara_record;
    public:
    Wagon(){};
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
};