#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int a = (n * (n + 1)) / 2;

    cout << a;

    return 0;
}
