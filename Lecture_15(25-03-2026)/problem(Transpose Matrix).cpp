// #include <iostream>
// #include <vector>
// using namespace std;

// vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     vector<vector<int>> result(n, vector<int>(m));

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             swap(result[j][i],matrix[i][j]);
//         }
//     }

//     return result;
// }




#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> matrix) 
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> result(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}

int main() 
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> answer = transpose(matrix);

    for (int i = 0; i < answer.size(); i++) 
    {
        for (int j = 0; j < answer[0].size(); j++) 
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
