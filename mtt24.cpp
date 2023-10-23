#include <iostream>

int sumbyvalue(int x, int y) // call by value
{
    return x + y;
}

int sumbyaddress(int *x, int *y) // call by address
{
    return *x + *y;
}

int main()
{
    int a;
    std::cin >> a;

    int b;
    std::cin >> b;

    int add = sumbyvalue(a, b);
    std::cout << add;

    int add1 = sumbyaddress(&a, &b);
    std::cout << add1;
}