#include <iostream>
using namespace std;

class myclass
{
public:
    int roll;
    string name;
};

main()
{
    myclass myobj1;
    myclass myobj2;

    myobj1.roll = 19;
    myobj1.name = "yogesh";

    myobj2.roll = 34;
    myobj2.name = "kartik";

    // print all object.
    cout << "Using oop concept for the first time.\n";
    cout << myobj1.roll << "\t" << myobj1.name << "\n";
    cout << myobj2.roll << "\t" << myobj2.name;
    return 0;
}