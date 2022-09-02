#include <iostream>
#include "Airplane.h"
#include "Person.h"


int main(){
    Person p1(1000,"Roland");
    Person p2(500,"Noe");
    Person p3(1000,"Vanitas");

    Airplane a1("CallSign",p1,p2);
    a1.setPilot(p3);
}
