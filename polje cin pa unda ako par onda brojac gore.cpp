#include <iostream>

using namespace std;

int main()
{
    int p[10],n=0;
    for(int i=0;i<10;i++)
       cin>>p[i];
    for(int i=0;i<10;i++){
        if(p[i]==p[i+1])
        n++;}
    cout<<n<<endl;


    return 0;
}
