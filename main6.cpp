#include <iostream>
using namespace std;

int main()
{
    string tekst;
    getline(cin, tekst);
    
    for (char c: tekst) {
        char znak = int(c); // wartość znaku w tablicy ascii decymalnie
        if (znak >= 65 && znak <= 90) { // duże znaki w tablicy ascii
            putchar(tolower(znak));
        } else {
            cout << c;
        }
    }
    return 0;
}


