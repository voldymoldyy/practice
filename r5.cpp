#include <iostream>

int palindrome(int n, int i, int arr[])
{
    if (n - 1 >= 0)
    {
        if (arr[n - 1] == arr[i])
        {
            return palindrome(n - 1, i + 1, arr);
        }

        else
        {
            return 0;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    int i = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int ans = palindrome(n, i, arr);
    if (ans == 0)
    {
        std::cout << "not palindrome";
    }
    else
    {
        std::cout << "palindrome";
    }
}
