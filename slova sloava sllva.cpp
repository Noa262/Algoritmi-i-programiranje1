#include <iostream>

using namespace std;

int main()
{
    char p[10];
    int n=0;
    for(int i=0;i<10;i++){
        cin>>p[i];
        if(p[i]>p[0])
        n++;
    }
    cout<<n<<endl;


    return 0;
}
