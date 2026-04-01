#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    bool f = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                if (a[i][j] != 0) {
                    f = false;
                    break;
                }
            }
        }
        if (f == false) {
            break;
        }
    }

    if (f) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}