#pragma once
#include <string>
#include "Person.cpp"
class Airplane{
    private:
        std :: string call_sign;
        Person Pilot;
        Person CoPilot;
    
    public:
    Airplane(std :: string callsign, Person thePilot, Person theCoPilot);Airplane();
    void setPilot(Person thePilot);
    Person getPilot();
    void setCoPilot(Person theCoPilot); 
    Person getCoPilot();
    void printDetails();
};