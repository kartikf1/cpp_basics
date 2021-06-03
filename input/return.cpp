#include <iostream>
using namespace std;

int fun(int x, int y)
{
    //cout << "The sum of given nmber is : " << x + y << "\n"; // This code also work
    // Let's try with return.
    return x + y;
}
 int main()
{
    cout << fun(7, 8);
    cout << fun(10, 100);
    cout << fun(5, 1);
    cout << fun(19, 34);
    return 0;
}