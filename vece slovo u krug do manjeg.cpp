#include <iostream>

using namespace std;

int main()
{
char a,b;
cout<<"unesi dva slova: ";
cin>>a>>b;
for(char i=b; b!=a; b++){
        if(b>'z')
        b='a';
    cout<<b<<endl;
}

    return 0;
}
