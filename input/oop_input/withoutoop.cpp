/*
This is a program which can be written with oop concept very easily.
But i want to write it without oop concept.

This program will take input from the user and print it.
*/

#include <iostream>
using namespace std;

void myfun(int x, string name)
{
    cout << name << " has roll no. " << x << "\n";
}
main()
{
    int y;
    string n;
    char ans;
    char anss = 'y';
    while (ans = anss)
    {
        cout << "Please enter your name : ";
        cin >> n;
        cout << "Please enter your roll no. : ";
        cin >> y;
        myfun(y, n);
        cout << "Do you want to add more name (y/n)... ";
        cin >> ans;
    }
    return 0;
}