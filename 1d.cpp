#include <iostream>
#include <cstring>

int main()
{
    char s[100];
    std::cin >> s;

    char copy[100];
    for (int i = 0; i < strlen(s); i++)
    {
        copy[i] = s[i];
        std::cout << copy[i];
    }
}