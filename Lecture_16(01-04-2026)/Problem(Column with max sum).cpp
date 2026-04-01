#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    static int a[1000][1000];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int m = -1;
    int p = 0;  

    for (int j = 0; j < n; j++) {
        int s = 0; 
 
        for (int i = 0; i < n; i++) {
            s = s + a[i][j];
        }

        if (s > m) {
            m = s;
            p = j + 1; 
        }
    }

    cout << p << " " << m;

    return 0;
}