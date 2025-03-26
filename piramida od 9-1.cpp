#include <iostream>

using namespace std;

int main(){

for(int i=0;i<9;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int j=0;j<(9-i);j++)
            cout<<9-i<<" ";
        cout<<endl;}
        return 0;
}
