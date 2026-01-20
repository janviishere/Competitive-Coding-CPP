#include <iostream>
using namespace std;

int main()
{
    int P,R,T,SI;
    cout<<"Enter the value of Principal:"<<endl;
    cin>>P;
    cout<<"Enter the value of Rate of interest:"<<endl;
    cin>>R;
    cout<<"Enter the value of Time:"<<endl;
    cin>>T;
    SI=(P*R*T)/100;
    cout<<"Simple Interest:"<<SI<<endl;
    return 0;
}