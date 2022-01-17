#include <iostream>
int main()
{
    int a, b, c, total, pr, grade;
    std::cout << "a :";
    std::cin >> a;
    std::cout << "b :";
    std::cin >> b;
    std::cout << "c :";
    std::cin >> c;
    total = a + b + c;
    pr = total / 3;
    std::cout << "\nyour total :" << total;
    std::cout << "\nyour pr:" << pr;
}
/*
a :10
b :20
c :30

your total :60
your pr:20
*/