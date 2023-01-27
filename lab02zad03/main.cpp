#include <iostream>
using namespace std;

int main() {

    //Grzegorz Dziuba, album: 22430
    int hour; //deklaracja zmiennej hour, przechowujacej godzine podana przez uzytkownika

    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    cout << "Podaj godzine: ";
    cin >> hour; //odczytanie podanej godziny przez uzytkownika


    if (hour >= 10 && hour < 18) { // instrukcja warunkowa if wpisany input powyzej jest mniejeszy od 18 i wiekszy lub rowny 10 to wykona sie kod ponizej
        cout << "Sklep jest otwarty." << endl; // czyli wyswietlenie tekstu ze jest otwarte
    } else {//w przeciwnym wypadku kod ponizej sie wykona
        cout << "Sklep jest zamkniety." << endl;
    }
    return 0;
}
