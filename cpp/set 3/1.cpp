#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter ch :";
    cin >> ch;

    (ch == 'A' || ch == 'a' || ch == 'e' || ch == 'E' || ch == 'I' || ch == 'i' || ch == 'o' || ch == 'O' || ch == 'U' || ch == 'u') ? cout << "vowal" : cout << "consonants";
}
/*
enter ch :j
consonants
*/