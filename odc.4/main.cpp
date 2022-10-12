        //Program wykorzystujacy mechanizm przyjzni
#include <iostream>
#include "przyjaciele.h"

using namespace std;

int main()
{
    Punkt pkt1("A",3,1);
    //pkt1.wczytaj();

    Prostokat p1("Prostokat",0,0,6,4);
    //p1.wczytaj();

    p1.sedzia(pkt1, p1);

    p1.wczytaj();

    return 0;
}


    //  ZADANIE DOMOWE - sedzia() jest metoda klasy prostokat,a nie funkcja z maina
