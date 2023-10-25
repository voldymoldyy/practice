#include <iostream>
#include <sstream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    std::stringstream g;
    g << n;
    std::string x;
    g >> x;
    std::cout << x + "3";
}