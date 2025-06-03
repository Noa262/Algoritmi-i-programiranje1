#include <iostream>

using namespace std;

int main()
{
int p[3][3];
for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
if(p[i]==p[j])
    cout<<p[i][j]<<endl;



    return 0;
}
