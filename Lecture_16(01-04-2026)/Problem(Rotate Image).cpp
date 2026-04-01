#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000][1000];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int s = 0;
        int e = n - 1;
        while (s < e) {
            int t = a[i][s];
            a[i][s] = a[i][e];
            a[i][e] = t;
            s++;
            e--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                int t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}