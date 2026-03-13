class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        int n = word.length();
        int total_left = n / k;
        int max_freq = 0;

        for (int i = 0; i < n; i += k) 
        {
            int current_count = 0;

            for (int j = 0; j < n; j += k) 
            {
                bool match = true;
                for (int l = 0; l < k; l++) 
                {
                    if (word[i + l] != word[j + l]) 
                    {
                        match = false;
                        break;
                    }
                }

                if (match) 
                {
                    current_count++;
                }
            }

            if (current_count > max_freq) 
            {
                max_freq = current_count;
            }
        }

        return total_left - max_freq;
    }
};




// class Solution {
// public:
//     int minimumOperationsToMakeKPeriodic(string word, int k) {
//         int n = word.length();
//         int totalBlocks = n / k;

//         unordered_map<string, int> counts;
//         int maxSeen = 0;

//         for (int i = 0; i < n; i += k) 
//         {
//             string chunk = word.substr(i, k);

//             counts[chunk]++;

//             if (counts[chunk] > maxSeen) 
//             {
//                 maxSeen = counts[chunk];
//             }
//         }

//         return totalBlocks - maxSeen;
//     }
// };