#include <iostream>

int great(int n, int *ptr)
{
    int big = 0;
    for (int i = 0; i < n; i++)
    {
        if (big < *(ptr + i))
        {
            big = *(ptr + i);
        }
    }
    std::cout << "greatest: " << big;
}

int least(int n, int *ptr)
{
    int small = *ptr;
    for (int i = 0; i < n; i++)
    {
        if (small > *(ptr + i))
        {
            small = *(ptr + i);
        }
    }
    std::cout << "smallest: " << small;
}

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int *ptr = &arr[0];

    great(n, ptr);
    std::cout << "\n";
    least(n, ptr);
}