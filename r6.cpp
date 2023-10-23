#include <iostream>

int main()
{
    int arr[11];
    std::cout << "enter your SAP ID in array form after pressing enter: ";
    for (int i = 0; i <= 10; i++)
    {
        std::cin >> arr[i]; // 70562300003
    }

    int last = 0;
    int j = 1;
    for (int i = 10; i >= 7; i--)
    {
        last = last + arr[i] * j;
        j = j * 10;
    }
    std::cout << last;
    std::cout << "\n";
    if (last % 3 == 0)
    {
        std::cout << "paper 0";
    }
    else if (last % 3 == 1)
    {
        std::cout << "paper 1";
    }
    else if (last % 3 == 2)
    {
        std::cout << "paper 2";
    }
    else
    {
        std::cout << "wrong SAP ID";
    }
}