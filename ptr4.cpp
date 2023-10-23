#include <iostream>

void palin(char *ptr)
{

    int n = 0;

    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        n++;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << *(ptr - i - 1);
        std::cout << "\n";
    }
}

int main()
{
    char str1[100];
    std::cout << "enter string 1: ";
    std::cin >> str1;

    palin(str1);
}