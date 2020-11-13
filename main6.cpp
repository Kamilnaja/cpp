#include <iostream>
using namespace std;

int main()
{
    string tekst;
    getline(cin, tekst);
    
    for (int i = 0; i < tekst.length(); i++) {
        char znak = tekst[i]; // wartość znaku w tablicy ascii decymalnie
        if (znak >= 65 && znak <= 90) { // duże znaki w tablicy ascii
            putchar(tolower(znak));
        } else {
            cout << znak;
        }
    }
    return 0;
}



