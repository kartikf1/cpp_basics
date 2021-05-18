#include <iostream>
#include <string>
using namespace std;

int main() {
  string Name;
  cout << "Type your full name: ";
  getline (cin, Name);
  cout << "Your name is: " << Name;
  return 0;
}
