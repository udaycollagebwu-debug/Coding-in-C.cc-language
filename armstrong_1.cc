#include <iostream>
using namespace std;

int main()
{
    int num, reminder, Armstrong = 0;
    int original;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    while (num != 0)
    {
        reminder = num % 10;
        Armstrong = Armstrong + (reminder * reminder * reminder); // ✅ no pow()
        num = num / 10;
    }

    if (original == Armstrong)
    {
        cout << "The number is an Armstrong number" << endl;
        cout << original << " = " << Armstrong << endl;
    }
    else
    {
        cout << "The number is not an Armstrong number" << endl;
    }

    return 0;
}