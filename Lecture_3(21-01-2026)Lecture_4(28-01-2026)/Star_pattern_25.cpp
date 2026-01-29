#include <iostream>
using namespace std;

int main() 
{
    int n = 5;
    int num = 1;

    for(int i = 1; i <= n; i++) 
    {
        for(int s = 1; s <= n - i; s++) 
        {
            cout << "    ";   
        }

        for(int j = 1; j <= 2*i - 1; j++) 
        {
            if(num < 10)
                cout << num << "   ";   
            else
                cout << num << "  ";    

            num++;
        }

        cout << endl;
    }

    return 0;
}
