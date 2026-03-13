class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        
        for (int x : nums) 
        {
            if (x % 2 == 0) 
            {
                result[left++] = x; 
            } 
            else 
            {
                result[right--] = x; 
            }
        }
        
        return result;
    }
};