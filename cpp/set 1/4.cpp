#include <iostream>
int main()
{
    float inch, cm, i, c;

    std::cout << "enter cm :";
    std::cin >> cm;
    i = cm / 2.5;
    std::cout << "\nyour inch :" << i;

    std::cout << "enter inch :";
    std::cin >> inch;
    c = inch * 2.5;
    std::cout << "your inch :" << c;
}
/*
enter cm :2.5

your inch :1
enter inch :1
your inch :2.5
*/