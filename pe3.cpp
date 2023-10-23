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

    int great = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (great < arr[i][j])
            {
                great = arr[i][j];
            }
        }
    }
    std::cout << great;
}