#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[n] = {0};
    {
        for (int i = 0; i < n; i++)
        {
            {
                std::cin >> arr[i];
            }
        }
    }

    int j = 1;
    float sum = 0;
    float avg = 0;
    float average[n] = {0};

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        avg = sum / j;
        average[i] = avg;
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << average[i];
        std::cout << "\t";
    }
}