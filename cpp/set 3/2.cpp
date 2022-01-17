#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << (char)(ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout << (char)(ch - 32);
    }
}
/*
b
B
*/