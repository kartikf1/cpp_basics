#include <iostream>
using namespace std;

// I am commenting following code for testing purpose.
/*
int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: ";
  cout << "Hello, This is a output test.";
  cout << x;
  return 0;
}
*/

int main() {
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
  return 0;
}
