// #include <iostream>
// #include <string>
// using namespace std;

// int main() 
// {
//     string str, reversedStr;
    
//     cout << "Enter a string: ";
//     cin >> str;

//     reversedStr = string(str.rbegin(), str.rend());

//     if (str == reversedStr) 
//     {
//         cout << "It is a Palindrome";
//     } 
//     else 
//     {
//         cout << "It is not a Palindrome";
//     }

//     return 0;
// }



















#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++) 
    {
        if (str[i] != str[n - 1 - i]) 
        {
            isPalindrome = false; 
            break;                
        }
    }

    if (isPalindrome) 
    {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "It is not a Palindrome" << endl;
    }

    return 0;
}