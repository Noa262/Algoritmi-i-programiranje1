#include <iostream>

using namespace std;

int main()
{
    int broj1;
    int broj2;
    int rezultat;
    cout << "Unesi dva broja:" << endl;
    cin >> broj1;
    cin >> broj2;
    rezultat=broj1-broj2;
    cout << "Razlika tih brojeva je:" << endl;
    cout << rezultat << endl;

    cout << "Unesi sljedeca 2 broja:" << endl;
    int brojput1;
    int brojput2;
    int umnozak;
    cin >> brojput1;
    cin >> brojput2;
    umnozak=brojput1*brojput2;
    cout << "Umnozak ova dvaju brojeva iznosi:"<< endl;
    cout << umnozak << endl;
    cout << "Zbroj oba rezultata iznosi: " << endl;
    int rezumo=rezultat+umnozak;
    cout << rezumo << endl;
    return 0;
}
