#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class xx
{
    public:
    int mo;
    char n[10],e[10];

    void a()
    {
        cout<<"Enter name : ";
        cin>>n;
        cout<<"Enter e-mail : ";
        cin>>e;
        cout<<"Enter mo : ";
        cin>>mo;
    }
    void b()
    {
        cout << "\n___Student Detail___\n";
        cout<<"name     : "<<n<<endl;
        cout<<"e-mail   : "<<e<<endl;
        cout<<"mobil no : "<<mo<<endl;
    }
};

class zz : public xx
{
    public:
    int p;
    char f;

    void c()
    {
        cout << "\n____Our courses____" << endl;
        cout << "Number  course";
        cout << "\n  1\tnode.js";
        cout << "\n  2\tc/c++";
        cout << "\n  3\tphp";
        cout << "\n  4\tweb design";
        cout << "\n  5\tflutter";
        cout << "\n  6\tpython\n";
    }
    void d()
    {
        cout << "\nchoose a course number : ";
        cin >> p;
        switch (p)
        {
        case 1:
            cout << "course : node.js" << endl;
            cout << "fee    : 35000" << endl;
            cout << "time   : 4 month" << endl;
            cout << "sir    : paresh sir" << endl;
            cout << "\nabout fee : press f" << endl;
            cout << "for fill application form : press c "<<endl;
            cout << "press : ";
            cin >> f;
            if (f == 'f')
            {
                cout << "\n first month EMI : 17500" << endl;
                cout << "second month EMI : 17500" << endl;
                cout << "total fee        : 35000" << endl;
            }
            break;
        case 2:
            cout << "course : c/c++" << endl;
            cout << "fee    : 10000" << endl;
            cout << "time   : 1.5 month" << endl;
            cout << "sir    : paresh sir" << endl;
            cout << "about fee : press f" << endl
                 << endl;
            cout << "press : ";
            cin >> f;
            if (f = 'f')
            {
                cout << "\n full payment in first month: 10000" << endl;
                cout << "\t\t\ttotal fee : 10000" << endl;
            }
        break;
        case 3:
            cout << "course : php" << endl;
            cout << "fee    : 30000" << endl;
            cout << "time   : 3 month" << endl;
            cout << "sir    : Jatin sir" << endl;
            cout << "about fee : press f" << endl
                 << endl;
            cout << "press : ";
            cin >> f;
            if (f = 'f')
            {
                cout << "\nfirst month EMI : 20000" << endl;
                cout << "second month EMI  : 10000" << endl;
                cout << "total fee         : 30000" << endl;
            }
        break;
        case 4:
            cout << "course : web design" << endl;
            cout << "fee    : 25000" << endl;
            cout << "time   : 4 month" << endl;
            cout << "sir    : Nilesh sir" << endl;
            cout << "about fee : press f" << endl
                 << endl;
            cout << "press : ";
            cin >> f;
            if (f = 'f')
            {
                cout << "\nfirst month EMI  : 12500" << endl;
                cout << "second month EMI   : 12500" << endl;
                cout << "total fee          : 25000" << endl;
            }
        break;

        }
    }
};

int main()
{
    zz i;
    i.a();
    i.b();
    i.c();
    i.d();
}