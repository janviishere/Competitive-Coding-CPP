#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int length = 0;
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ') 
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ') 
        {
            length++;
            i--;
        }

        return length;
    }
};

int main()
{
    Solution s;
    string a;
    cin >> a;
    
    int r = s.lengthOfLastWord(a);
    cout << r << endl;
    
    return 0;
}