#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    srand(time(0));
    int number = rand() % 6 + 1;
    std::cout << "Wylosowano liczbe: " << number << std::endl;
    return 0;
}
