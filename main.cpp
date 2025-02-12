#include <iostream>

using namespace std;

int main()
{
    int bodovi;
    cout<<"Unesite broj postignuti bodova: ";
    cin>>bodovi;
    int gz5;
    int gz4;
    int gz3;
    int gz2;
    cout<<"Unesi broj bodova potreban za peticu: ";
    cin>>gz5;
    cout<<"Dobro, a sada unesi broj bodova potreban za cetvorku: ";
    cin>>gz4;
    cout<<"A sada za trojku: " ;
    cin>>gz3;
    cout<<"I na kraju za dvojku: ";
    cin>>gz2;
   if (bodovi>=gz5){
    cout<<"Odlican!";
   }
   else if(bodovi>=gz4){
    cout<<"Vrlo dobar!";
   }
   else if(bodovi>=gz3){
    cout<<"Dobar!";
   }
   else if(bodovi>=gz2){
    cout<<"Dovoljan!";
   }
   else cout<<"Nedovoljan";


    return 0;
}
