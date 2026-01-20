#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value: " << endl;
    cin >> a;

    if (a % 2 == 0) {
        cout << "Number is Even" << endl;
    }
    else {
        cout << "Number is Odd" << endl;
    }

    return 0;
}
