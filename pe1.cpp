#include <iostream>

int main()
{
    int n;
    std::cout << "enter row: ";
    std::cin >> n;

    int m;
    std::cout << "enter column: ";
    std::cin >> m;

    int arr[n][m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    std::cout << sum;
}