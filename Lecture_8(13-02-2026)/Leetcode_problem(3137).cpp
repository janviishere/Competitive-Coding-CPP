#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        int n = word.length();

        vector<string, int> counts;
        
        int maxCount = 0;

        for (int i = 0; i < n; i = i + k) 
        {

            string chunk = word.substr(i, k);
            
            counts[chunk]++;

            if (counts[chunk] > maxCount) {
                maxCount = counts[chunk];
            }
        }

        int totalPieces = n / k;

        return totalPieces - maxCount;
    }
};