#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Emter the first number :";
    cin >> num1;
    cout << "Enter the second number :";
    cin >> num2;
    cout << "Enter the therd number :";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "The first number is largest one :" << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "The second number is largest :" << num2 << endl;
    }
    else if (num1 == num2 && num1 == num3)
    {
        cout << "Both threenumbers are equale" << endl;
    }
    else
    {
        cout << "The therd number is largest one :" << num3 << endl;
    }
    return 0;
}