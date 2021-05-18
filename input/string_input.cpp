#include <iostream>
#include <string>
using namespace std;

main()
{
    string star = "";
    int tstar = 0;
    string starstring = "*";
    char programinput;
    while (tstar < 51)
    {
        star = star.append(starstring);
        tstar++;
    }
    cout << star << "\n";

    cout << "Do you want to run this program (y/n) : ";
    cin >> programinput;
    if (programinput == 'y')
    {
        string name;
        int lofname;
        cout << star << "\n";
        cout << "Enter your name : ";
        cin.ignore();
        getline(cin, name); // getline() function is used to read a line.
        cout << star << "\n";
        cout << "Hello " << name << "\n";
        lofname = name.length() - 1; // Subtracted whitespace from lenght.
        cout << "The lenght of your name is : " << lofname;
    }
    return 0;
}