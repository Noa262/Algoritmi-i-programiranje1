#include <iostream>

using namespace std;

int main()
{
int p[10][10];
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        p[i][j]=rand()%100+1;
    cout<<p[i][j]<<endl;
    }
}

    return 0;
}
