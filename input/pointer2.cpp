#include <iostream>
using namespace std;

main()
{
    string str = {"apple"};
    int i = 0;
    for (string word; i < 3; i++)
    {
        cout << "Please enter any word " << i + 1 << ": ";
        cin.ignore(); // I have to use it to clear apce of previous cout.
        getline(cin, word);
        cout << word;
        //cin >> word; // cin only take char as a input, means only 1 character.
        // So i have to use getline() function
        //str.append(word+" ");
        //ystr[i] = word;
        cout << str << "\n";
    }
    cout << "Now printing array backward.\n";
    // Printing last entered word first and so on...
    cout << str[2];
    return 0;
}