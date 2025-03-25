#include <iostream>

using namespace std;

int main()
{
    int broj,zbroj;
    cin>>broj;
    zbroj=0;
    do{
        zbroj+=broj%10;
        broj/=10;
    }while(broj>0);
    cout<<"Zbroj je: "<<zbroj;

    return 0;
}
