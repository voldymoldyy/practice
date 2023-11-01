#include <iostream>
void bubblesort(int n, int arr[])
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
        std::cout << "\t";
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

    bubblesort(n, arr);
}