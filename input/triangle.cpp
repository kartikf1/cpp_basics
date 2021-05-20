#include <iostream>
using namespace std;

main()
{
    int x;
    int y = 0;
    cout << "Enter a number : ";
    cin >> x;
    cout << "\nNow priting triangle.\n";
    for (string star = "*"; y < x; y++)
    {
        cout <<"\t"<< star << "\n";
        star = star + "*";
    }
    return 0;
}
 