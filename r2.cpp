#include <iostream>

int search(int n, int arr[], int k)
{
    if (n > 0)
    {
        if (arr[n - 1] == k)
        {
            return n;
        }
        else
        {
            return search(n - 1, arr, k);
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int k;
    std::cout << "enter search element: ";
    std::cin >> k;

    int found = search(n, arr, k);
    if (found >= 0)
    {
        std::cout << "value found at : " << found;
    }
    else
    {
        std::cout << "not found";
    }
}