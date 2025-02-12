#include <iostream>

using namespace std;

int main()
{
  /* //1. zad.
   int jedinica;
   int broj;
   cout<<("Unesite cjeli broj");
   cin>> broj;
   jedinica=broj%10;
   cout<<jedinica;



    //2 zad

    int broj1,broj2,iznos;
    scanf("%i %i",broj1,broj2);
    iznos=broj1+broj2;
    printf("Zbroj %i i %i iznosi %i",broj1, broj2, iznos);
*/
    //3 zad
/*
    int broj;
    cout<<"Molim Vas, unesite bilo koji pozitivan broj od 1 do 1000: ";
    cin>>broj;
    if(broj>1 & broj<=10){
        cout<<"broj se nalazi u intervalu od 1 do 10. ";}
        else if(broj>10 & broj<=100){
            cout<<"broj se nalazi u intervalu od 10 do 100";
        }
        else if(broj>100 & broj<=1000){
            cout<<"broj se nalazi u intervalu od 1 do 1000";
        }
        else if (broj>1000){
            cout<<"Unijeli ste broj koji je Van intervala. ";
            }

  */     // 4 zad.
       int broj;
       cout<<"Unesite bilo koji broj";
       cin>>broj;
       if(broj%3==0){
        cout<<"broj je djeljiv sa 3.";
       }
       else if (broj %3 !=0){
        cout<<"broj nije djeljiv sa 3.";
       }

        return 0;
        }


