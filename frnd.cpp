#include <iostream>
class rectangle
{
    int length;
    int width;

public:
    void get()
    {
        std::cout << "enter length: ";
        std::cin >> length;
        std::cout << "enter width: ";
        std::cin >> width;
    }
    friend int CalculateArea(rectangle);
};

int CalculateArea(rectangle a)
{
    return a.length * a.width;
}

int main()
{
    rectangle obj;
    obj.get();
    std::cout << "area of rectangle is : " << CalculateArea(obj);
}