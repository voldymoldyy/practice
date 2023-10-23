#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int x = n;

    for (int i = 0; i < n; i++)
    {
        int l = 0;
        for (int j = 0; j <= l; j++)
        {
            std::cout << "*";
            std::cout << " ";
        }
        for (int j = 0; j < x; j++)
        {
            std::cout << " ";
        }
        x--;

        for (int j = 0; j <= l; j++)
        {
            std::cout << "*";
            std::cout << " ";
        }
        std::cout << "\n";
        l++;
    }
}
