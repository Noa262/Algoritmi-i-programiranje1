#include <iostream>
using namespace std;

int main() {
    int p[3][4];


    cout << "Unesi polje 3x4:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> p[i][j];
        }
    }


    cout << "Transponirano polje (4x3):" << endl;
    for(int j=0;j<4;j++) {
        for(int i=0;i<3;i++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
