#include <iostream>
using namespace std;

class first
{
public:
    void myfun(string user)
    {
        cout << "Hello!!! How are you " << user;
    }
};

main()
{
    first obj1;
    string uname;
    cout << "Please enter your name : ";
    getline(cin, uname);
    obj1.myfun(uname);
    return 0;
}