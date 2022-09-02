#pragma once
#include <string>
class Capybara{
    private:
        std :: string name;
        int age;
    public:
        void setName(std :: string capyName);
        std :: string getName();
        void setAge(int capyAge);
        int getAge();
};