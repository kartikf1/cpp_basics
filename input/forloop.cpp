#include <iostream>
using namespace std;

// Program to print all integer till user defined range.

main()
{
    int last_number;
    cout << "This program will print all integer till user want. \n";
    cout << "Enter last number : ";
    cin >> last_number;
    cout << "\nNow printing all numbers till " << last_number / 10; // divide by 10 to remove extra zero, which was added automatically.
    // and i don't know how to fix it, so i divide it by 10 to remove that extra zero from end.
    int num = 0;
    for (num; num < last_number + 1; num++)
    {
        cout << num << "\n";
    }
    cout << "work completed.";
    return 0;
}