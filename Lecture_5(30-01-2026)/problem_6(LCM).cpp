#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a;
    cin >> b;

    long long x = a;
    long long y = b;

    while (x != y) 
	{
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    long long gcd = x;
    long long lcm = (a * b) / gcd;

    cout << lcm;

    return 0;
}
