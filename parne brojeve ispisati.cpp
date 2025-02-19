#include <iostream>

using namespace std;

int main()
{
     int a;
    int b;
    cout<<"Unesi prvi broj: ";
    cin>>a;
    cout<<"Hvala, a sada drugi broj: ";
    cin>>b;
    if(a%2==0){
    for(int a; a<=b; a+=2)
        cout<<a<<endl;
    }
    return 0;
}
