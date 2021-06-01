#include <iostream>
#include <string>
using namespace std;

void myfun(int num1, int num2)
{
    cout << "The sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << "\n";
    cout << "The substraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << "\n";
    cout << "The multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << "\n";
    cout << "The  of division " << num1 << " and " << num2 << " is: " << num1 / num2;
}

main()
{
    string str = "Please enter a number: ", str2 = "Please enter other number: ";
    int a, b;
    cout << str;
    cin >> a;
    cout << str2;
    cin >> b;
    myfun(a, b);
    return 0;
}