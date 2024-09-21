#include <iostream>
using namespace std;
// Take positive integer input and tell if it is divisible by 5 and 3.

int main()
{
    int num;
    cout << "Check number is divisible by 5 and 3: ";
    cin >> num;

    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "This number is divisible by 3 or 5";
    }
    else
    {
        cout<<"Number is not divisible by 5 or 3";
    }
}