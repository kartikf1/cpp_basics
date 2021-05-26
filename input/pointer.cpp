#include <iostream>
using namespace std;

main()
{
    int n1 = 19;
    int n2 = 34;
    int *n3 = &n1;
    string s1 = "apple";
    string &s2 = s1; // refrencing to string s1.
    cout << "Printing memory addr of variable n1.\n";
    cout << n3 << "\n";
    cout << &n1 << "\n";
    cout << "Now defrencing pointer --> " << *n3 << "\n";
    cout << "Printing string s1 ---> " << s2 << "\n";
    return 0;
}