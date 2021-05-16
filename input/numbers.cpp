/*#include <iostream>
using namespace std;

main()
{
    int a = 1934;
    float b = 19.34;
    float c = 1934e5;
    double d = 19.34e15;
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << "Let's see all code is working or not.";
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() // This code is copied from https://www.w3schools.com/cpp/trycpp.asp?filename=demo_data_type_scientific
           // for testing purpose
{
    float f1 = 355554e4; // Edited value     original value = 35e3
    double d1 = 12E4;
    bool mynameisyogesh = false;
    bool mynameiskartik = false;    // When i give value = 0, it doesn't give any output.
    cout << f1 << "\n";
    cout << d1 << "\n";
    cout << mynameisyogesh << "\n";
    cout << mynameiskartik;
    return 0;
}