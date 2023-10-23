#include <iostream>

int fact(int n)
{
    if (n > 0)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    std::cin >> n;

    int ans = fact(n);
    std::cout << ans;
}
