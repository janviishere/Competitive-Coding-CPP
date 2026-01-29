# include <iostream>
using namespace std;

int main()
{
    int n=10;

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n-i ; j++)
        {
            cout<<"   ";
        }
        for(int j = n-i ; j <= n-1 ; j++)
        {
            if(j == n-1)
            {
                cout<<" 0 ";
            }
            else
            {
                cout<<" "<<j+1<<" ";
            }
        }
        for(int j = 2 ; j <= i ; j++)
        {
            cout<<" "<<n-j+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}