#include <iostream>
#include <cstring>

int main()
{
    char c[15];
    std::cin >> c;

    char copy[15];
    strcpy(copy, c);
    std::cout << copy;

    std::cout << strlen(copy);
}