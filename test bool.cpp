#include <iostream>

using namespace std;

int main()
{int main() {
    int p[10][10];
    bool prekid=false;
    int nk=0;nr=0;

    // Unos elemenata
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            int brojevi;
            cin >> brojevi;
            if (brojevi == 0) {
                prekid=true;
                break;
            }
            p[i][j]=brojevi;
            unesenoKolona[i]++;
        }
        if (nk[i] != 0) nr++;
    }


    cout << "Uneseni elementi:\n";
    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nk[i]; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
