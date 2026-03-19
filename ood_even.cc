//Check if a number is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number is a Even number .\n";
    }
    else
    {
        cout << "The number is a Odd number .\n";
    }
    return 0;
}