#include <iostream>

int swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int a;
    std::cout << "a: ";
    std::cin >> a;

    int b;
    std::cout << "b: ";
    std::cin >> b;

    swap(a, b);
    std::cout << "a: " << a;
    std::cout << "\n";
    std::cout << "b: " << b;
}