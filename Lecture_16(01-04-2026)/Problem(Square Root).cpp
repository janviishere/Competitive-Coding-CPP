#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << n;
        return 0;
    }

    long long s = 1, e = n, ans = 0;

    while (s <= e) {
        long long mid = s + (e - s) / 2;

        if (mid * mid <= n) {
            ans = mid;     
            s = mid + 1;   
        } else {
            e = mid - 1;   
        }
    }

    cout << ans;
    return 0;
}