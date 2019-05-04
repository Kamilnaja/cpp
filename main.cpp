#include <iostream>
#include <limits>

using namespace std;

int items[3];

void checkValidity(int numberVal) {
    if (cin.fail()) {
        cout << "Coś nie działa ";
        cout << "Program zakończy działanie ";
        exit(1);
    } else {
        cout << " Liczba " << numberVal << " jest prawidłowa \n";
    }
}

void getNumber(int numberVal) {
    cout << "wpisz liczbę :" << numberVal << endl;
    cin >> items[numberVal];
    checkValidity(items[numberVal]);
}

int main() {
    for (unsigned int i = 0; i < sizeof(items)/sizeof(items[0]); i++) {
        getNumber(i);
    }

    int result = 0;
    for (int i = 0; i < 3; i++) {
        result += items[i];
    }

    cout << "Wynik obliczeń wynosi " << result;

    return 0;
}
