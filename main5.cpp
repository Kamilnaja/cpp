#include <iostream>
using namespace std;

int main()
{
    string tekst;
    getline(cin, tekst);
    
    for (int i = 0; i < tekst.length(); i++) {
        char znak = tekst[i]; // wartość znaku w tablicy ascii decymalnie
        if (znak == 97) { // mała litera a w ascii
            cout << 'A';
        } else {
            cout << znak;
        }
    }
    return 0;
}
