#include <iostream>
#include <string>
using namespace std;

class solution
{
    public:
    int myAtoi(string str)
    {
        int n = str.length();
        long result = 0;
        int sign = 1;
        int i = 0;

        while(i<n && str[i]==' ')
        {
            i++;
        }
        if(i<n && (str[i]=='+' || str[i]=='-'))
        {
            if(str[i]=='-')
            {
                sign = -1;
            }
            i++;
        }
        while (i < n && str[i] >= '0' && str[i] <= '9') 
        {
            result = result * 10 + (str[i] - '0');

            if (result * sign >= INT_MAX) return INT_MAX;
            if (result * sign <= INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(result * sign); 
    }
};