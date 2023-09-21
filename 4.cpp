#include <iostream>

int main()
{
    int m;
    std::cout << "enter m: ";
    std::cin >> m;

    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[m][n] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum + arr[i][i];
    }

    int j = n - 1;
    for (int i = 0; i < m; i++)
    {
        sum = sum + arr[j][i];
        std::cout << arr[j][i];
        std::cout << "\n";
        j--;
    }
    sum = sum - arr[1][1];
    std::cout << sum;
}