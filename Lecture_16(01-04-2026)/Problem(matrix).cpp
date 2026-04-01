#include <iostream>
using namespace std;

int main() {
    int rowCount, colCount;
    cin >> rowCount >> colCount;

    int matrix[30][30];

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    int currentRow = 0;
    int currentCol = colCount - 1;
    int isFound = 0;

    while (currentRow < rowCount && currentCol >= 0) {
        if (matrix[currentRow][currentCol] == target) {
            isFound = 1;
            break; 
        } 
        else if (matrix[currentRow][currentCol] > target) {
            currentCol--;
        } 
        else {
            currentRow++;
        }
    }

    cout << isFound;

    return 0;
}