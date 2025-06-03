#include <iostream>
using namespace std;

int main() {
    char p[5][5];


    cout << "Unesite 5 rijeci po 5 slova (slovo po slovo):" << endl;
    for(int i=0;i<5; i++) {
        cout << "Rijec #" << i+1 << ": ";
        for(int j = 0; j < 5; j++) {
            cin >> p[i][j];
        }
    }


    cout << "\nUnesene rijeci su: ";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << p[i][j];
        }
        cout << " ";
    }

    cout << endl;
    return 0;
}

