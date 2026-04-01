#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[10][10];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int rowStart = 0;
    int rowEnd = m - 1;
    int colStart = 0;
    int colEnd = n - 1;
    
    int count = 0;
    int total = m * n;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        
        for (int i = rowStart; i <= rowEnd && count < total; i++) {
            cout << a[i][colStart] << ", ";
            count++;
        }
        colStart++;

        for (int j = colStart; j <= colEnd && count < total; j++) {
            cout << a[rowEnd][j] << ", ";
            count++;
        }
        rowEnd--;

        for (int i = rowEnd; i >= rowStart && count < total; i--) {
            cout << a[i][colEnd] << ", ";
            count++;
        }
        colEnd--;

        for (int j = colEnd; j >= colStart && count < total; j--) {
            cout << a[rowStart][j] << ", ";
            count++;
        }
        rowStart++;
    }

    cout << "END";

    return 0;
}