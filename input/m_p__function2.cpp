#include <iostream>
using namespace std;

void fun(string name, int age){ // multiple parameter in a function.
    cout << name<< " is "<<age << " years old.\n";
}
main(){
    fun("ram", 40);
    fun("shyam", 12);
    fun("mohan", 16);
    fun("nobita", 78);
    return 0;
}