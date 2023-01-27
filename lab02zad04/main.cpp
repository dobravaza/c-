#include <iostream>
using namespace std;
    //Grzegorz Dziuba, album: 22430
//funkcja zwracajaca mniejsza z dwoch liczb
int minNumber(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {

    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    int x, y; //deklaracja zmiennej
    cout << "Podaj pierwsza liczbe:"; //zapytanie cou
    cin >> x; // wczytanie pierwszej liczby
    cout << "podaj druga liczbe:"; //pytanie o druga liczbe
    cin >> y; //wczytanie drugiej liczby
    int min = minNumber(x, y); // uzycie powyzszej funckji z if
    cout << "mniejsza liczba to :" << min << endl;
    return 0;
}
