#include <iostream>

using namespace std;

int main()
{
float price;
float PDV;
PDV=0.05;
cout<<"Unesi cijenu, to jest price nekog predmeta BEZ PDV-a: ";
cin>>price;
price=price+price*PDV;
cout<<"Cijena, to jest price sa PDV-om iznosi: ";
cout<<price;
    return 0;
}
