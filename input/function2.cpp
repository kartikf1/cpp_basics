/*Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will
 occur. It is because C++ works from top to bottom; which means that if the function is not declared 
 above main(), the program is unaware of it:*/

/*However, it is possible to separate the declaration and the definition of the function - for code optimization.
*/

#include <iostream>
using namespace std;

void fun1();
main()
{ //we can't write any function inside a main.
    /*
    void my_fun(){
        cout << "This will give you error.;
        }"
    */
    // cout << fun1(); // This will also give error.
    fun1();
    return 0;
}
void fun1()
{
    cout << "This function is written outside the main function.";
}
