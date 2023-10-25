#include <iostream>
int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int p[n];
    p[0] = 1;
    if (n == 1)
    {
        std::cout << p[0];
    }
    else if (n > 1)
    {
        std::cout << p[0];
        std::cout << "\n";
        for (int i = 1; i < n; i++)
        {
            if (p[i - 1] == 1)
            {
                p[i] = 2;
                for (int k = 0; k < i; k++)
                {
                    std::cout << p[k];
                }
                std::cout << p[i];
            }
            else
            {
                p[i] = 1;
                for (int k = 0; k < i; k++)
                {
                    std::cout << p[k];
                }
                std::cout << p[i];
            }
            std::cout << "\n";
        }
    }
}