#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int x;
    std::cout << "enter x: ";
    std::cin >> x;

    int great = 0;
    int smol = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            great++;
        }
        else if (arr[i] >= x)
        {
            smol++;
        }
    }
    std::cout << great;
    std::cout << "\n";
    std::cout << smol;
}