#include <iostream>
int main()
{
    int c, f, celcius, fahrenheit;
    std::cout << "enter celcius :";
    std::cin >> celcius;
    f = (celcius * 9 / 5) + 32;
    std::cout << "\nyour fahrenheit :" << f;

    std::cout << "\nenter fahrenheit :";
    std::cin >> fahrenheit;
    c = (fahrenheit - 32) * 5 / 9;
    std::cout << "\nyour celcius :" << c;
}

/*
enter celcius :100

your fahrenheit :212
enter fahrenheit :212

your celcius :100
*/