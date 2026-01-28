# include <iostream>
using namespace std;

int main()
{
    int n=5;
    int index = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n-i ; j++)
        {
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<" "<<index<<" ";
            index++;
        }
        for(int j = 2 ; j <= i ; j++)
        {
            cout<<" "<<index<<" ";
            index++;
        }
        cout<<endl;
    }

    return 0;
}