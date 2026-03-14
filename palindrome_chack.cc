#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, reminder;
    cout << "Enter a number :";
    cin >> num;
    int original = num;
    while (num != 0)
    {
        reminder = num % 10;
        rev = rev * 10 + reminder;
        num = num / 10;
    }
    if (rev == original)
    {
        cout << "The number is palindrome number ." << endl;
    }
    else
    {
        cout << "The number is not Palindrome number." << endl;
    }
    return 0;
}