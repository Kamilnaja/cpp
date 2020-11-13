#include <iostream>
using namespace std;

int main()
{
    string tekst;
    getline(cin, tekst);
    
    for (char c: tekst) {
        char znak = int(c); // wartość znaku w tablicy ascii decymalnie
        if (znak == 97) { // mała litera a w ascii
            cout << 'A';
        } else {
            cout << c;
        }
    }
    return 0;
}

