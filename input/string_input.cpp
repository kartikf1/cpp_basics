#include <iostream>
#include <string>
using namespace std;

main()
{
    string name;
    int lofname;
    string star = "";
    int tstar = 0;
    string starstring = "*";
    while (tstar < 51)
    {
        star = star.append(starstring);
        tstar++;
    }
    cout << star << "\n";
    char programinput;
    cout << "Do you want to run this program (y/n) : ";
    cin >> programinput;
    if (programinput == 'y')
    {
        cout << star << "\n";
        cout << "Enter your name : ";
        getline(cin, name); // getline() function is used to read a line.
        cout << "\n"<< star << "\n";
        cout << "Hello " << name << "\n";
        lofname = name.length() - 1; // Subtracted whitespace from lenght.
        cout << "The lenght og your name is : " << lofname;
    }
    return 0;
}