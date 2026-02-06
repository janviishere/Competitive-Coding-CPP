#include <iostream>
using namespace std;

int main() 
{
    long long n;
    cin >> n;

    if (n == 0) 
	{
        cout << "true" << endl;
        return 0;
    }

    int temp = n;
    int digits = 0;

    int countTemp = n;
    while (countTemp > 0) 
	{
        countTemp /= 10;
        digits++;
    }


    int sum = 0;
    temp = n;
    while (temp > 0) 
	{
        int num = temp % 10;
        
        int pow = 1;
        for (int i = 0; i < digits; i++) 
		{
            pow = pow*num;
        }
        
        sum += pow;
        temp /= 10;
    }

    if (sum == n) 
	{
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}