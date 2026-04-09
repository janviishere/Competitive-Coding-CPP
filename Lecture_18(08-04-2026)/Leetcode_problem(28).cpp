#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string h, string n) {
        int x = h.length();
        int y = n.length();

        if (y > x) 
        {
            return -1;
        }

        for (int i = 0; i <= x - y; i++) 
        {
            int j;
            for (j = 0; j < y; j++) 
            {
                if (h[i + j] != n[j]) 
                {
                    break;
                }
            }     
            if (j == y) 
            {
                return i;
            }
        }

        return -1;
    }
};

int main() 
{
    Solution s;
    string a, b;
    cin >> a >> b;
    
    int r = s.strStr(a, b);
    cout << r << endl;
    
    return 0;
}
