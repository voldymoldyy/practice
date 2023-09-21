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

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = i + 1;
        if (arr[i] == k)
        {
            std::cout << "matched: " << arr[i];
        }
    }
}