#include <iostream>

class cars
{
private:
    std::string model;

public:
    std::string m(std::string mod)
    {
        mod = model;
        return mod;
    }
};

class eingine : public cars
{
private:
    std::string eingine = "turbo charged";

public:
    std::string e(std::string eng)
    {
        eng = eingine;
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

    cars ob;
    eingine obb;
    std::cout << obb.e(eng);
    std::cout << obb.m(mo);
}