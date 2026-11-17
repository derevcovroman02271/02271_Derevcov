#include <iostream>

int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;

    p = q;

    std::cout << "P = Q:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Адрес p: " << p << std::endl;
    std::cout << "Адрес q: " << q << std::endl;

    a = 10;
    p = &a;
    q = &b;

    *p = *q;

    std::cout << "\n*P = *Q:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Адрес p: " << p << std::endl;
    std::cout << "Адрес q: " << q << std::endl;
}
