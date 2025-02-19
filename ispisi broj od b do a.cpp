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
    for(int i=b-1; i>a; i=i-1){
        cout<<i<<endl;
    }
    return 0;
}
