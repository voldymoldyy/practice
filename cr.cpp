#include <iostream>

struct cricket
{
    char name[20], country[20];
    int match;
    float avg;
};

int main()
{
    int i;
    cricket c[10];
    for (i = 0; i < 10; i++)
    {
        std::cout << "enter details of player: ";
        std::cout << "\n";
        std::cout << "enter name of player: ";
        std::cin.getline(c[i].name, 50);
        std::cout << "enter no.of maches played: ";
        std::cin >> c[i].match;
        std::cin.ignore();
        std::cout << "enter country: ";
        std::cin.getline(c[i].country, 100);
        std::cout << "enter the average: ";
        std::cin >> c[i].avg;
        std::cin.ignore();
    }
}
