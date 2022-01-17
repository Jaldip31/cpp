#include <iostream>
#include <string.h>

using namespace std;
class student
{
    int roll_no;
    string name;

public:
    void reads()
    {
        cout << "enter roll no : ";
        cin >> roll_no;
        cout << "enter name ";
        fflush(stdin);
        getline(cin, name);
    }
    void display()
    {
        cout << "\n roll no : " << roll_no << endl;
        cout << "name : " << name << endl
             << endl;
    }
};
class last
{
public:
    void t()
    {
        cout << "thank you";
    }
};

class marks : public student
{
public:
    int s1;
    int s2;
    int s3;
    void getmarks()
    {
        cout << "enter marks of 3 subject " << endl;
        cin >> s1 >> s2 >> s3;
    }
    void putmarks()
    {
        cout << "subject 1 : " << s1 << endl;
        cout << "subject 2 : " << s2 << endl;
        cout << "subject 3 : " << s3 << endl;
    }
};
class result : public marks, public last
{
    int t;
    float p;
    char div[10];

public:
    void process()
    {
        t = s1 + s2 + s3;
        p = t / 3.0;
        p >= 60 ? strcpy(div, "First") : p >= 50 ? strcpy(div, "secound")
                                                 : strcpy(div, "third");
    }
    void printresult()
    {
        cout << " total : " << t << endl;
        cout << "percentage : " << p << endl;
        cout << "Division : " << div << endl;
    }
};

int main()
{
    result x;
    x.reads();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
}
