#include <iostream>
#include <math.h>

using namespace std;

class Punkt{
    float x,y;
    string nazwa;

public:
    void wyswietl(){
        cout << nazwa << "(" << x << "," << y << ")" << endl;
    }
    Punkt(string n = "S", float a = 0,float b = 0){
        nazwa = n;
        x = a;
        y = b;
    }
};

class Kolo :public Punkt{       //klasa Kolo dziedziczy publicznie z klasy Punkt
    string nazwa;
protected:
    float r;
public:
    void wyswietl(){
        cout << "Kolo o nazwie: " << nazwa << endl;
        cout << "Srodek kola: " << endl;
        Punkt::wyswietl();
        cout << "Promien: " << r << endl;
        cout << "Pole kola: " << M_PI*r*r << endl;
    }

    Kolo(string nk = "Kolko",string np = "S", float a = 0, float b=0, float pr=1)
    :Punkt(np,a,b)
    {
        nazwa = nk;
        r = pr;
    }
};

    /* ZADANIE DOMOWE - klasa dziedziczna Kula.
        Nowy: atrybut nazwa;
        metody - konstruktor z wykorzystaniem listy inicjalizacyjnej
               - void wyswietl() korzystajacy z metody odziedziczonej po klasie Kolo,
               dodatkowo pokazujacy objetosc kuli - V = 4/3pi.r3
        W mainie jest tylko obiekt klasy kula i wywolanie na jego rzecz metody wyswietl(); */

class Kula :public Kolo{
    string nazwa;
public:
    void wyswietl(){
        Kolo::wyswietl();
        cout << "Objetosc kuli: V = " << ((4 * M_PI*r*r*r)/3) << endl;

    }
    Kula(string nku = "Kulka", string punkt = "S", float a = 0, float b = 0)
    :Kolo(nku,punkt,a,b)
    {
        nazwa = nku;
    }

};

int main()
{
    Kula k1;
    k1.wyswietl();

    return 0;
}

