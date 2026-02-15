#include <vector>
using namespace std;

class Solution {
public:
    bool isStrictlyPalindromic(int n) 
    {
        for (int b = 2; b <= n - 2; b++) 
        {
            
            vector<int> digits;
            int tempN = n;

            while (tempN > 0) 
            {
                digits.push_back(tempN % b);
                tempN = tempN / b;
            }

            int start = 0;
            int end = digits.size() - 1;
            while (start < end) {
                if (digits[start] != digits[end]) 
                {
                    return false; 
                }
                start++;
                end--;
            }
        }
        
        return true;
    }
};