#include <iostream>

using namespace std;

int main()
{
   int broj;
   cout<<"Molim Vas, unesite bilo koji broj: ";
   cin>>broj;
   if (broj%2==0){
    cout<<"Uneseni broj je paran.";
   }
   else if (broj%2!=0){
    cout<<"Uneseni broj je neparan.";
   }


    return 0;
}
