#include <iostream>

int sum(int i, int n)
{

    if (i == n + 1)
        return 0;
    return i + sum(i + 1, n);
}

int main()
{
    int n;
    std::cout << "enter number: ";
    std::cin >> n;

    int i = 1;

    int add = sum(i, n);
    std::cout << add;
}