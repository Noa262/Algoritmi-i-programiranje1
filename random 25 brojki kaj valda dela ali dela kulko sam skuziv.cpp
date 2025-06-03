#include <iostream>

using namespace std;

int main()
{
    int p[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            p[i][j]=rand()%100+1,
            cout<<p[i][j]<<endl;
        }
    }
    return 0;
}
