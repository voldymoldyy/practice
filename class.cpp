#include <iostream>

class cars
{
private:
    std::string model;

public:
    std::string m(std::string mod)
    {
        model = mod;
        return model;
    }
};

class eingine
{
private:
    std::string eingine;

public:
    std::string e(std::string eng)
    {
        eingine = eng;
        return eingine;
    }
};

class choice : public eingine, public cars
{
private:
    std::string choice;

public:
    void print()
    {
        std::cout << m;
        std::cout << e;
    }
};

int main()
{
    std::string mo;
    std::cout << "enter model: ";
    std::cin >> mo;

    std::string eng;
    std::cout << "enter engine: ";
    std::cin >> eng;

    choice c;
    c.print();
}