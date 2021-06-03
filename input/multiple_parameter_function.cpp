// I have to debug this code.
#include <iostream>
#include <string>
using namespace std;

string str1;

//void fun();

void fun1(string word = str1)
{
    for (char letter, posnum; int a = 0 < sizeof(word) + 1; a++)
    {
        letter = word[a];
        posnum = a;
        cout << letter;
        cout << posnum;
        //fun();
       // cout << "The position of \t"<< letter << "is \t"<< posnum << "\n";
    };
}

main()
{
    //string word;
    cout << "Please enter any word : ";
    getline(cin, str1);
    //word = str1;
    cout << "\n";
    fun1();
    return 0;
}
/*
void fun(char j = letter, int k =  posnum)
{
    cout << j << "Position number : " << k;
}*/
