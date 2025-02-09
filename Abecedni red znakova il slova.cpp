#include <iostream>

using namespace std;

int main()
{
    char prviznak;
    char drugiznak;
    cout<<"Unesi prvo slovo ili znak: ";
    cin>>prviznak;
    cout<<"Hvala, a sad drugo slovo ili znak: ";
    cin>>drugiznak;
    if (prviznak<drugiznak){
        cout<<"Slova ili znakovi su upisana abecednim redom.";
    }
    else if(drugiznak<prviznak){
        cout<<"Slova ili znakovi NISU upisana abecednim redom.";
    }
    return 0;
}
