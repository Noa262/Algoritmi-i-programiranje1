#include <iostream>

using namespace std;

int main()
{
int br1,br2;
for(br2=1;br2<10;br2++){
    for(br1=1;br1<10;br1++)
        cout<<br1<<"*"<<br2<<"="<<br1*br2<<"  ,  ";
}

    return 0;
}
