#include <iostream>

using namespace std;

int main()
{
int p[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>p[i][j];
    }
}

for(int i=0;i<5;i++){
        int najv=p[i][0];
    for(int j=0;j<5;j++){
        if(p[i][j]>najv){
            najv=p[i][j];

    }
}
cout<<"Najveci element u retku" <<i+1<<" je: "<<najv<<endl;
}
    return 0;
}
