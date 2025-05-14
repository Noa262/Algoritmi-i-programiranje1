#include <iostream>

using namespace std;

int main()
{
  int p2[100];
  for(int i=0;i<100;i++)
    p2[i]=i;
  for(int i=0;i<100;i++){
  if(p2[i]<50)
    p2[i]-=1;
   if(p2[i]>50)
    p2[i]+=1;

    cout<<p2[i]<<endl;}




    return 0;
}
