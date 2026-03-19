#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, reminder, armstrong = 0;
    int original;
    cout << "Enter a nimber :";
    cin >> num;
    original = num;
    while (num != 0)
    {
        reminder = num % 10;
        armstrong = armstrong + (int)round(pow(reminder, 3));
        num = num / 10;
    }
    if (original == armstrong)
    {
        cout << "The number is a armstrong number .\n";
        cout << original << "=" << armstrong << endl;
    }
    else
    {
        cout << "The number the is not a armstrong number .";
    }
    return 0;
}