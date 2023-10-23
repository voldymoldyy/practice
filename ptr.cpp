#include <iostream>

int rvr(int n, int *ptr, int *ptr1)
{
    int temp[n] = {0};
    for (int i = 0; i < n; i++)
    {
        *(temp + i) = *ptr;
        ptr--;
    }
    int s = n;
    int x = n;
    for (int i = 0; i < n; i++)
    {
        *ptr1 = *(temp + i);
        s--;
        std::cout << *ptr1;
    }
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

    int *ptr = &arr[n - 1];
    int *ptr1 = &arr[0];
    rvr(n, ptr, ptr1);
}
