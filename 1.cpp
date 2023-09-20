#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[n];
    int soe = 0;
    int soo = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            soe = soe + arr[i];
        }
        else
        {
            soo = soo + arr[i];
        }
    }
    std::cout << "sum of even: " << soe;
    std::cout << "\n";
    std::cout << "sum of odd: " << soo;
}