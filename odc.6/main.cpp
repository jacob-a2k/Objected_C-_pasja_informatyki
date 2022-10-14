        //Program posiada 2 klasy opisujacy figury geometryczne.
        //Klase Kolo oraz Kwadrat bedace pochodnymi klasy Ksztal

#include <iostream>

using namespace std;

class Ksztalt{
public:
    virtual void oblicz_pole()=0;   //Czysta funkcja wirtualna
};
/////////////////////////////////

class Kolo :public Ksztalt{
    float r;
public:
    Kolo(float x){
        r=x;
    }
    virtual void oblicz_pole(){
        cout << "Pole kola: " << 3.14*r*r << endl;
    }
};
///////////////////////////////

class Kwadrat :public Ksztalt{
    float a;
public:
    Kwadrat(float x){
        a=x;
    }
    virtual void oblicz_pole(){
        cout << "Pole kwadratu: " << a*a << endl;
    }
};
///////////////////////////////

void obliczenia(Ksztalt *x){    // Funkcja uniwersalna, bo dziala na kazdej klasie pochodnej od klasy Ksztalt
    x -> oblicz_pole();
}

int main()
{
    Kolo k(1);
    Kwadrat kw(2);

    Ksztalt *wsk;

    wsk = &k;
    wsk -> oblicz_pole();

    wsk = &kw;
    wsk -> oblicz_pole();

    obliczenia(wsk);

    return 0;
}
