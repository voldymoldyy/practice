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
    int reverse[n];
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        reverse[i] = 0;
        reverse[i] = arr[j];
        std::cout << reverse[i];
        std::cout << "\t";

        j--;
    }
}