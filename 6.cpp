#include <iostream>

int main()
{
    int n;
    std::cout << "enter row for arr1: ";
    std::cin >> n;

    int m;
    std::cout << "enter row for arr1: ";
    std::cin >> m;

    int x;
    std::cout << "enter row for arr2: ";
    std::cin >> x;

    int y;
    std::cout << "enter row for arr2: ";
    std::cin >> y;

    int arr1[n][m] = {0};
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << "enter arr1: ";
            std::cin >> arr1[i][j];
        }
    }

    int arr2[x][y] = {0};
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << "enter arr2: ";
            std::cin >> arr2[i][j];
        }
    }

    int multiply[m][x] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < i; k++)
            {
                multiply[i][j] = multiply[i][j] + arr1[j][i] * arr2[i][k];
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)

            std::cout << multiply[i][j];
        std::cout << "\t";
    }
    std::cout << "\n";
}
