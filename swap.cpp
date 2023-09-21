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

    int swap;
    std::cout << "enter swap position: ";
    std::cin >> swap;

    int s;
    s = swap - 1;

    int cpy[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cpy[i] = arr[i];
    }

    arr[s] = arr[n - swap];
    arr[n - swap] = cpy[s];

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }
}