#include <iostream>

class copy
{
    std::string orignal;

public:
    copy()
    {
        std::cout << "enter string: ";
        std::cin >> orignal;
    }
    copy(copy &cp)
    {
        orignal = cp.orignal;
    }
    void print()
    {
        std::cout << orignal;
    }
};

int main()
{
    copy obj;
    copy obj2;
    copy obj3;
    obj.print();
    obj2.print();
    obj3.print();
}