#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[(2 * n) - 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < (2 * i) - 1; j++)
        {
            if (arr[j] == 1)
            {
                arr[j + 1] = 2;
                std::cout << arr[j + 1];
            }
            else
            {
                arr[j + 1] = 1;
                std::cout << arr[j + 1];
            }
        }
        std::cout << "\n";
    }
}