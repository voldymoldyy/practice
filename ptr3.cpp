#include <iostream>
#include <cstring>

void rev(std::string str1, std::string str2, int n1, int n2)
{
    for (int i = 0; i < n1 + n2; i++)
    {
        str1[n1 + i] = str2[i];
    }
    std::cout << "concenated string: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        std::cout << str1[i];
    }
}

int main()
{
    std::string str1;
    std::cout << "enter str1: ";
    std::cin >> str1;

    std::string str2;
    std::cout << "enter str2: ";
    std::cin >> str2;

    int n1 = str1.length();
    int n2 = str2.length();

    rev(str1, str2, n1, n2);
}