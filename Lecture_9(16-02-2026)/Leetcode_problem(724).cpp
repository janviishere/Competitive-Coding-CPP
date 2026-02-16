#include<iostream>
#include<vector>

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        int n = nums.size();
        
        int i = 0;
        while (i < n) {
            totalSum += nums[i];
            i++;
        }
        
        for (int j = 0; j < n; j++) 
        {
            if (leftSum == totalSum - leftSum - nums[j]) 
            {
                return j;
            }
            leftSum = leftSum + nums[j];
        }
        
        return -1;
    }
};





























// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int i = 0;
//         int n = nums.size();
        
//         while (i < n) {
//             int leftSum = 0;
//             int rightSum = 0;
 
//             int l = 0;
//             while (l < i) {
//                 leftSum += nums[l];
//                 l++;
//             }
       
//             int r = i + 1;
//             while (r < n) {
//                 rightSum += nums[r];
//                 r++;
//             }
            
//             if (leftSum == rightSum) {
//                 return i;
//             }
            
//             i++;
//         }
        
//         return -1; 
//     }
// };
















// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n = nums.size();
        
  
//         for (int i = 0; i < n; i++) {
//             int leftSum = 0;
//             int rightSum = 0;      
     
//             for (int l = 0; l < i; l++) {
//                 leftSum += nums[l];
//             }
 
//             for (int r = i + 1; r < n; r++) {
//                 rightSum += nums[r];
//             }
            
//             if (leftSum == rightSum) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };