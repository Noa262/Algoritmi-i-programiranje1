#include <iostream>

using namespace std;

int main()
{
 int brojocjena=0;
 int unesenaocjena;
 int zbrojocjena=0;
 for (int i=1; i>0; i){
    cin>>unesenaocjena;
    if (unesenaocjena==0)
        break;
    brojocjena+=1;
    zbrojocjena+=unesenaocjena;
 }
 cout<<zbrojocjena/(brojocjena*1.0);

  return 0;

}
