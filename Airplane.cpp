#include <iostream>
#include <string>
#include "Airplane.h"
Airplane :: Airplane(std :: string callsign, Person thePilot, Person theCoPilot){
    call_sign = callsign;
    Pilot = thePilot;
    CoPilot = theCoPilot;
}

void Airplane :: setPilot(Person thePilot){
    Pilot = thePilot;
}

void Airplane :: setCoPilot(Person theCoPilot){
    CoPilot = theCoPilot;
}

Person Airplane :: getPilot(){
    return Pilot;
}

Person Airplane :: getCoPilot(){
    return CoPilot;
};

void Airplane :: printDetails(){
    std :: cout << call_sign << std :: endl;
    std :: cout << Pilot.getName() << std :: endl;
    std :: cout << CoPilot.getName() << std :: endl;
}