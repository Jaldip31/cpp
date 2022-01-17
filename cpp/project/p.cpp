#include <iostream>
#include <string>
using namespace std;
class info
{
public:
    string name;
    char email[10];
    int mo;

    info()
    {
        cout << "Welcome to Skill Qode" << endl;
        cout << " The Programming Lab" << endl;
    }

    void detail();
    void p_detail();
};
class co :public info
{
  //  public:

  //  string add,ref;
public:
    void course();
    void c_detail();

};

void info::detail()
{
    fflush(stdin);
    cout << "enter name :";
    getline(cin, name);
    cout << "Enter email : ";
    cin >> email;
    cout << "Enter mobile : ";
    cin >> mo;
}
void info::p_detail()
{
    cout << "\n___Student Detail___\n";
    cout << " Name      : " << name << endl;
    cout << " Email     : " << email << endl;
    cout << " Mobile no : " << mo << endl;
}
void co::course()
{

    cout << "\n____Our courses____" << endl;
    cout << "Number  course";
    cout << "\n  1\tnode.js";
    cout << "\n  2\tc/c++";
    cout << "\n  3\tphp";
    cout << "\n  4\tweb design";
    cout << "\n  5\tflutter";
    cout << "\n  6\tpython\n";

    cout << endl;
}
void c_detail()
{
    int a;
    char f;
    cout << "\nchoose a course number : ";
    cin >> a;
    switch (a)
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
        else
        {
            cout<<"jjj";
        }
        break;
    case 2:
        cout<<"kkk";
        break;
    }
}

int main()
{
    co i;
    i.detail();
    i.p_detail();
    i.course();
    i.c_detail();
  //  i.dd();
}
