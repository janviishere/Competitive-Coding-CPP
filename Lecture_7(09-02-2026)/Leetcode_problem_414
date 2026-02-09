#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> distinctElements;

        for (int n : nums) {
            distinctElements.insert(n);

            if (distinctElements.size() > 3) {
                distinctElements.erase(distinctElements.begin());
            }
        }

        if (distinctElements.size() == 3) {
            return *distinctElements.begin();
        } else {
            return *distinctElements.rbegin(); 
        }
    }
};

