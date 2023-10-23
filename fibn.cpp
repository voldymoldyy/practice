#include <iostream>

int fib(int n, int term1, int term2)
{
    std::cout << term1;
    if (n - 1 > 0)
        fib(n - 1, term2, term1 + term2);
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int term1 = 0;
    int term2 = 1;

    int series = fib(n, term1, term2);
    std::cout << series;
}