class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
  
        vector<int> result(m * n); 
        
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        int k = 0;

        while (k < m * n) 
        {
            for (int i = left; i <= right && k < m * n; i++) 
            {
                result[k] = matrix[top][i];
                k++;
            }
            top++;

            for (int i = top; i <= bottom && k < m * n; i++) 
            {
                result[k] = matrix[i][right];
                k++;
            }
            right--;

            for (int i = right; i >= left && k < m * n; i--) 
            {
                result[k] = matrix[bottom][i];
                k++;
            }
            bottom--;

            for (int i = bottom; i >= top && k < m * n; i--) 
            {
                result[k] = matrix[i][left];
                k++;
            }
            left++;
        }

        return result;
    }
};





















