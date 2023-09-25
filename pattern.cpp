#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int l = n;

    int space = n - 3;

    for (int i = 0; i <= n; i = i + 2)
    {
        for (int j = 0; j < space; j++)
        {
            std::cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            std::cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            std::cout << " ";
        }
        std::cout << "\n";

        space--;
    }
}