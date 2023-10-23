#include <iostream>

int main()
{
    int arr[3][3];
    std::cout << "enter array1: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int arr1[3][3];
    std::cout << "enter array2: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> arr1[i][j];
        }
    }

    int sum[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr[i][j] + arr1[i][j];
            std::cout << sum[i][j];
            std::cout << "\n";
        }
    }
}