#include <iostream>
int sum(int n, int i)
{

    if (i == n + 1)
        return 0;

    return i + sum(n, i + 1);
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int i = 0;

    int add = sum(n, i);
    std::cout << add;
}