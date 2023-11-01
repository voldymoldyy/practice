#include <iostream>

class rectangle
{
public:
    int length;
    int width;

    rectangle(int a, int b)
    {
        length = a;
        width = b;
    }

    int areaofrect()
    {
        int area = length * width;
        return area;
    }
};

class box : public rectangle
{
public:
    int depth;

    box(int a, int b, int c) : rectangle(a, b), depth(c)
    {
    }

    int areaofbox()
    {
        int areaa = 2 * ((length * width) + (width * depth) + (depth * length));
        return areaa;
    }
};

int main()
{
    int a, b, c;

    std::cout << "Enter length: ";
    std::cin >> a;

    std::cout << "Enter width: ";
    std::cin >> b;

    std::cout << "Enter depth of box: ";
    std::cin >> c;

    rectangle r(a, b);
    int rectangleArea = r.areaofrect();
    std::cout << "Area of rectangle: " << rectangleArea << std::endl;

    box b1(a, b, c);
    int boxArea = b1.areaofbox();
    std::cout << "Area of box: " << boxArea << std::endl;
}