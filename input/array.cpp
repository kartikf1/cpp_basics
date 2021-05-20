#include <iostream>
using namespace std;

main(){
    string name[5] = {"apple", "google", "microsoft", "ibm", "tesla"};
    string arr[5] = {"ab", "bc", "cd", "de", "ff"};
    string arr2[] = {"apappappapapap", "hghghdgahdgahsdghag"};
    int num = sizeof(name[4]);
    int num2 = sizeof(arr[0]);
    int num3 = sizeof(arr2);
    cout << "The size of this array is "<< num; // The output will be 24 bcz of 3 pointers.
    cout << "The size of array 2 is "<< num2; // Each of size 8 bit. Thats why 8*3 = 24.
    cout << "The size of array 3 is "<< num3; 
    return 0;
}