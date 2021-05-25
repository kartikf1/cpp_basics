/*
This program will take input from user
and add that input to a single array
and print each with their array number
and in last it will print the size of that array
and also print memory address of the object.
*/

#include <iostream>
using namespace std;

main()
{
    string str1 = {};
    string str2; // To get input from user.
    char ch;
    int num1 = 0;
    do
    {
        cout << "Please enter any word :";
        cin >> str2;
        str1.append(str2);
        str1.append(" ");
        cout << "\nDo you want to add another number (y/n) : ";
        cin >> ch;
        num1++;
    } while (ch == 'y');
    //cout << str1;
    //cout << num1;
    int num2 = 0;
    while (num2 < num1)
    {
        cout << num2 << " " << str1[num2]<< "\n";
        num2++;
    }
    cout << "The size of array is = " << sizeof(str1);
    return 0;
}