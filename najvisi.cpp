#include <iostream>

using namespace std;

int main(){

    int unos,najv=0;
    bool a;
    cin>>najv;
    do{
    cout<<("Zelis li nastaviti?");
    cin>>a;
    if(a==1){
        cin>>unos;
        if(unos>=najv)
            najv=unos;}
            else
                break;
            }
    while(1);
    cout<<najv;
    return 0;
    }




