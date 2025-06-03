#include <iostream>
using namespace std;

int main() {
    int p[3][3];
    int zb = 0;


    for(int i=0; i<3;i++) {
        for(int j= 0; j<3; j++) {
            cin >> p[i][j];
            zb+= p[i][j];
        }
    }

    cout << "Unesena matrica je:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    cout <<"Zbroj svih elemenata ovog polja je: "<<zb<< endl;

    return 0;
}
