#include <iostream>

using namespace std;

int main()
{
int brojeva[10];
int a=-10;
int b=10;
int neg=0;
for(int i=0;i<10; i++)
{
brojeva[i]=rand()%(b-a+1)+a

}
for(int i=0;i<10; i++){
    if(brojeva[i]<0)
cout<<brojeva[i]<<endl;
}
    return 0;
}
