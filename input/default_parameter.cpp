# include <iostream>
# include <string>
using namespace std;

// Just try making a function without void keyword.
void myfun(string name = "india"){ // Yes without void this code is working.
    cout << name << "\n";
}
main(){
    myfun("apple");
    myfun();
    myfun("microsoft");
    return 0;
}