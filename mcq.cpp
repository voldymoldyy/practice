#include <iostream>
int main()
{
    int a = 5;
    std::cout << "FIRST" << (a << 2) << "SECOND";
    std::cout << (a << 2);
}