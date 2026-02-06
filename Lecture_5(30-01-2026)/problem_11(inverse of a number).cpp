#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    long long n;
    cin >> n;

    long long inverse = 0;
    int current_position = 1;

    while (n > 0) 
    {
        int digit = n % 10;

        inverse += current_position * pow(10, digit - 1);

        n = n / 10;
        current_position++;
    }

    cout << inverse << endl;

    return 0;
}