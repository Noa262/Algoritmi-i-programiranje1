#include <iostream>

using namespace std;

int main()
{
    char a,b;
    cout<<"Unesi dva slova: ";
    cin>>a>>b;
    for(char i=a+1; i<=b;i+=1){
        cout<<i<<endl;
    }
    return 0;
}
