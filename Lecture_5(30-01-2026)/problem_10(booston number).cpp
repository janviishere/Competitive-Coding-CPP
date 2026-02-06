#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigits(int n) 
{
    int sum = 0;
    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() 
{
    long long n;
    cin >> n;

    long long temp = n;
    int digitSumN = sumOfDigits(n);
    int primeFactorsDigitSum = 0;

    for (int i = 2; i <= sqrt(temp); i++) 
    {
        while (temp % i == 0) {
            primeFactorsDigitSum += sumOfDigits(i);
            temp /= i;
        }
    }

    if (temp > 1 && temp != n) 
    {
        primeFactorsDigitSum += sumOfDigits(temp);
    }

    if (digitSumN == primeFactorsDigitSum) 
    {
        cout << 1 << endl;
    } else 
    {
        cout << 0 << endl;
    }
}

int main() 
{
    solve();
    return 0;
}