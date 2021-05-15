#include <iostream>
using namespace std;

main (){
    int num1 = 19;  // Created a integer variable.
    double num2 = 34.0;     //Created a float variable.
    char txt = 'c';     //Created a char variable.
    string txtfull = "hello";       // String variable.
    bool btrue = true;      // Boolen true.
    cout << "This is my third file in c++.\n";
    cout << "Now i am printing all variable.\n";
    cout << "This is a integer : "<< num1 << "\n";
    cout << "Now i am printing all my variables in one line.";
    cout << num2 << txt << txtfull << btrue ;       // All without space (^_^)
    /* Now i want to print all variable with space.
    Do you know how to do this?
    Just tell me please. (@_@) */
    cout <<"\n"<< num2 << "\t"<< txt<<"\t"<<txtfull<<"\t"<<"btrue";       // I have taken tab. I don't know whether 
    return 0;                                                       // this styntax will work or not. Let's try...
}

// That code was right. (*_*)