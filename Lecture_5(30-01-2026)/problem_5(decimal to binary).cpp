#include <iostream>
using namespace std;

int main() 
{
    int decimal;
    cout << "Enter a decimal number"<<endl;
    cin >> decimal;

    int binary = 0, place= 1;

    while (decimal> 0) 
    {                              
        int x = decimal % 2;                 //x = remainder
        binary = binary + x * place;
        place = place * 10;
        decimal = decimal / 2;
    }

    cout << "Binary number" << binary;
    return 0;
}
 