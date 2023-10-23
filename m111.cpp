#include <iostream>

int main()
{
    int m;
    std::cout << "enter rows: ";
    std::cin >> m;

    int n;
    std::cout << "enter rows: ";
    std::cin >> n;

    int arr[m][n] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int t[m][n] = {0};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << t[i][j];
            std::cout << "\n";
        }
    }
}