#include <iostream>
    //Grzegorz Dziuba, album: 22430
bool isLeapYear(int year) { //funkcja warunkowa if
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int main() {

    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430 " << std::endl;
    int year; //zmiena
    std::cout << "wpisz rok 5";; //zapytanie
    std::cin >> year; //wczytanie zmiennej

    if (isLeapYear(year)) { //znowu if ktory sprawdza czy jest parzyste czy nie
        std::cout << year << " jest, przestepny" << std::endl; //zapytanie
    } else { //jesli powyzszy warunek nie jest spelniony to ponizszy kod sie wykona
        std::cout << year << " jest, nieprzestepny" << std::endl; // instrukcja else
    }

    return 0;
}


