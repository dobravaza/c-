#include <iostream>


using namespace std;

int main() {

    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    int option; //deklaracja zmiennej
    cout << "Wybierz figure, dla ktorej chcesz obliczyc pole: " << endl; // menu wyboru
    cout << "1. Kwadrat" << endl;
    cout << "2. prostokat" << endl;
    cout << "3. Trojkat" << endl;
    cin >> option; // wczytanie wpisnego inputa do zmiennej

    if (option == 1) { //instrukcja warunkowa, if uzytkownik wiska jeden to instrukcja ponizej sie wykona
        double a;
        cout << "Podaj dlugsc boku kwadratu: ";
        cin >> a;
        cout << "Pole kwadratu wynosi " << a*a << "." << endl;
    } else if (option == 2) { //instrukcja warunkowa, if uzytkownik wiska dwa to instrukcja ponizej sie wykona
        double a, b;
        cout << "Podaj dlugosc pierwszego boku prostokata: ";
        cin >> a;
        cout << "Podaj dlugosc drugiego boku prostokata: ";
        cin >> b;
        cout << "Pole prostokata wynosi " << a*b << "." << endl;
    } else if (option == 3) { //instrukcja warunkowa, if uzytkownik wiska trzy to instrukcja ponizej sie wykona
        double a, h;
        cout << "Podaj dlugosc podstawy trojkata: ";
        cin >> a;
        cout << "Podaj wysokosc trojkata: ";
        cin >> h;
        cout << "Pole trojkata wynosi " << (a*h)/2 << "." << endl;
    } else { //jesli nie zostanie wcisniete 1,2 ani 3 to wykona sie isntrukcja else
        cout << "Niepoprawny wybor wybierz opcje z listy." << endl;
    }

    return 0;
}
