// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();
  
//         vector<int> result(m * n); 
        
//         int top = 0, bottom = m - 1;
//         int left = 0, right = n - 1;
//         int k = 0;

//         while (k < m * n) 
//         {
//             for (int i = left; i <= right && k < m * n; i++) 
//             {
//                 result[k] = matrix[top][i];
//                 k++;
//             }
//             top++;

//             for (int i = top; i <= bottom && k < m * n; i++) 
//             {
//                 result[k] = matrix[i][right];
//                 k++;
//             }
//             right--;

//             for (int i = right; i >= left && k < m * n; i--) 
//             {
//                 result[k] = matrix[bottom][i];
//                 k++;
//             }
//             bottom--;

//             for (int i = bottom; i >= top && k < m * n; i--) 
//             {
//                 result[k] = matrix[i][left];
//                 k++;
//             }
//             left++;
//         }

//         return result;
//     }
// };






// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();

//         vector<int> ans;
//         int top=0,bottom=m-1,left=0,right=n-1;
    

//         while (top<=bottom && left<=right) 
//         {
//             for (int i = left; i <= right ; i++) 
//             {
//                 ans.push_back(matrix[top][i]);
//             }
//             top++;

//             for (int i = top; i <= bottom ; i++) 
//             {
//                 ans.push_back(matrix[i][right]);
//             }
//             right--;

//             if(top<=bottom)
//             {
//             for (int i = right; i >= left ; i--) 
//             {
//                 ans.push_back(matrix[bottom][i]);
//             }
//             bottom--;
//             }
//             if(left <= right)
//             {
//             for (int i = bottom; i >= top ; i--) 
//             {
//                 ans.push_back(matrix[i][left]);
//             }
//             left++;
//         }
//         }
//         return ans;
//     }
// };



#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> ans;
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
