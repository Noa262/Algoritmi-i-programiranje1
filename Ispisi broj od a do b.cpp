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
    for (int i=a+1; i<b; i+=1){
        cout<<i<<endl;
    }
    return 0;
}
