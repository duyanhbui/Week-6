#pragma once
class Wagon{
    private:
        int wagon_size = 5;
        int cnt_seat = 0;
        Capybara* Capybara_records;
    public:
    Wagon();
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
};