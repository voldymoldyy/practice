#include <iostream>
int multiply(int n, int arr[])
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return arr[n - 1] * multiply(n - 1, arr);
    }
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int i = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int ans = multiply(n, arr);
    std::cout << ans;
}