    // Podejscie obiektowe. Klasy. Obiekty.
    // Program przechowuje informacje o zwierzetach ktore posiada farmer
/*
#include <iostream>

using namespace std;

class Zwierze{

public:

    //atrybuty
    string gatunek;
    string imie;
    int wiek;

    //metody
    void dodaj_zwierze(){
        cout << "DODAWANIE NOWEGO ZWIERZECIA DO BAZY: " << endl;
        cout << "Podaj gatunek: ";
        cin >> gatunek;
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj wiek: ";
        cin >> wiek;
    }
    void daj_glos(){
        if(gatunek == "kot") cout << imie << " lat " << wiek << ": Miau!";
        else if(gatunek == "koza") cout << imie << " lat " << wiek << ": Beee!";
        else if(gatunek == "krowa") cout << imie << " lat " << wiek << ": Muuu!";
        else cout << "Nieznany gatunek! Moze nawet jakies UFO?";
    }

};

int main()
{
    Zwierze z1;

    z1.dodaj_zwierze();
    z1.daj_glos();

    Zwierze z2;
    z2.dodaj_zwierze();
    z2.daj_glos();

    return 0;
}
*/

    // ZADANIE DOMOWE - stworzyc klase samochod z podanymi atrybutami i metodami + 2 obiekty

#include <iostream>

using namespace std;

class Samochod{

public:

    string marka;
    string model;
    int rocznik;
    double przebieg;

    void wczytaj(){
        cout << "\nDODAJ SAMOCHOD DO TWOICH ULUBIONYCH\n";
        cout << "Podaj marke samochodu: ";
        cin >> marka;
        cout << "Podaj model samochodu: ";
        cin >> model;
        cout << "Podaj rocznik samochodu: ";
        cin >> rocznik;
        cout << "Podaj przebieg samochodu: ";
        cin >> przebieg;
    }
    void wypisz(){
        cout << "\nNazwa: " << marka << ", " << model << endl;
        cout << "Wyprodukowany przez koncern " << marka << " w roku " << rocznik << endl;
        cout << "Obecnie pokonal dystans: " << przebieg << " !!!\n";
    }
};
int main(){

    Samochod s1, s2;

    s1.wczytaj();
    s2.wczytaj();
    s1.wypisz();
    s2.wypisz();

    return 0;
}
