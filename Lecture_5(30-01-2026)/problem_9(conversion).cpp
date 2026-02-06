#include <iostream>
using namespace std;

int main() {
    int sb, db;
    long long sn;

    cin >> sb;
    cin >> db;
    cin >> sn;


    long long decimalValue = 0;
    long long multiplier = 1; 

    while (sn > 0) {
        int digit = sn % 10;     
        decimalValue = decimalValue + (digit * multiplier);
        multiplier = multiplier * sb; 
        sn = sn / 10;             
    }


    long long result = 0;
    long long placeValue = 1;

    while (decimalValue > 0) {
        int remainder = decimalValue % db; 
        result = result + (remainder * placeValue);
        decimalValue = decimalValue / db;
        placeValue = placeValue * 10;      
    }

   
    cout << result << endl;

    return 0;
}