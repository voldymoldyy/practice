#include <iostream>
int reverse(int n, int arr[])
{

    if (n - 1 >= 0)
    {
        std::cout << arr[n - 1];
        std::cout << "\t";
        reverse(n - 1, arr);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    reverse(n, arr);
}
