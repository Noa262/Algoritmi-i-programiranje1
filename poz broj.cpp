#include <iostream>

using namespace std;

int main()
{
    int broj;
    do{
        cout<<"Unesi pozivitan broj: ";
        cin>>broj;

    }while(broj <0);
    cout<<"Unijeli ste broj: "<<broj;

    return 0;
}
