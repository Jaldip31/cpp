#include <iostream>
int main()
{
    int d, r, dollar, rupee;
    std::cout << "enter rupee";
    std::cin >> r;
    rupee = r / 70;
    std::cout << "\nyour doller" << rupee;

    std::cout << "enter dollar";
    std::cin >> d;
    dollar = d * 70;
    std::cout << "\nyour rupee" << dollar;
}
/*
enter rupee140

your doller2
enter dollar2

your rupee140
*/