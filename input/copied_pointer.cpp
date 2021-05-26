// Code copied from https://www.w3schools.com/cpp/trycpp.asp?filename=demo_array_change
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
    return 0;
}
