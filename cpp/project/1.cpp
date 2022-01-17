#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class s
{
    int roll;
    string n;

public:
    void re();
    void d();
};
class m : public s
{
public:
    int s1, s2, s3;

    void gm();
    void pm();
};
class r : public m
{
    int t;
    float p;
    char div[10];

public:
    void pro();
    void pp();
};

void s::re()
{
    cout << "enter roll no : ";
    cin >> roll;
    fflush(stdin);
    cout << "enterr name :";
    fflush(stdout);
    fflush(stdin);
    getline(cin, n);
}
void s::d()
{
    cout << "roll no : " << roll;
    cout << "\nname is : " << n;
}
void m::gm()
{
    cout << "enter 3 subject of marks :";
    cin >> s1 >> s2 >> s3;
}
void m::pm()
{
    cout << "\nsubject 1 : " << s1;
    cout << "\nsubject 2 : " << s2;
    cout << "\nsubject 3 : " << s3;
}
void r::pro()
{
    t = s1 + s2 + s3;
    p = t / 3;
    // (p > 90) ? strcpy(div, "first") : (p > 60) ? strcpy(div, "secound"): strcpy(div, "third");
}
void r::pp()
{
    cout << "total : " << t << endl;
    cout << "pr : " << p << endl;
    cout << "division : " << div << endl;
}

int main()
{
    r j;
    j.re();
    j.gm();
    j.pro();
    j.d();
    j.pm();
    j.pp();
}