#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int del;
    std::cout << "enter position: ";
    std::cin >> del;

    int updated[n - 1];
    for (int i = 0; i < del - 1; i++)
    {
        updated[i] = arr[i];
    }
    for (int i = del - 1; i < n; i++)
    {
        updated[i] = arr[i + 1];
    }

    n = n - 1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = updated[i];
        std::cout << arr[i];
        std::cout << "\t";
    }
}
