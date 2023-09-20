#include <iostream>

int main()
{
    int m;
    std::cout << "enter m: ";
    std::cin >> m;

    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}