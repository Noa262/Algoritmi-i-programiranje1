#include <iostream>

using namespace std;

int main()
{
int broj1;
cout<<"Unesi prvi broj: ";
cin>>broj1;
if (broj1%3==0){
    cout<<"Broj je djeljiv sa 2.";
}
else if (broj1%3!=0){
    cout<<"Broj NIJE djeljiv sa 2.";
}

    return 0;
}
