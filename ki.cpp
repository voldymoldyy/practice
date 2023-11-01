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
    box(int a, int b, int c) : rectangle(length, width), depth(c)
    {
        depth = c;
    }

    int areaofbox()
    {
        int areaa = 2 * ((length * width) + (width * depth) + (depth * length));
        return areaa;
    }
};

int main()
{
    int a;
    std::cout << "enter length: ";
    std::cin >> a;

    int b;
    std::cout << "enter breadth: ";
    std::cin >> b;

    int c;
    std::cout << "enter depth of box: ";
    std::cin >> c;

    rectangle r(a, b);
    r.areaofrect();

    box b();
    int boxarea = b.areaofbox();
}
