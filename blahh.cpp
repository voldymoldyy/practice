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
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            count++;
        }
    }
    std::cout << count;
}