#pragma once
#include "Capybara.h"
class Wagon{
    private:
        int wagon_size = 4;
        int cnt_seat = 0;
        Capybara* Capybara_records;
    public:
    Wagon();
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
};