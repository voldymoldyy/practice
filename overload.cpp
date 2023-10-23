#include <iostream>

class op
{
    int a;

public:
    void geta()
    {
        std::cout << "enter no: ";
        std::cin >> a;
    }
    void printa()
    {
        std::cout << a;
    }
    op operator+(op op2)
    {
        op op3;
        op3.a = a + op2.a;
        return op3;
    }
};

int main()
{
    op op1, op2, op3;
    op1.geta();
    op2.geta();
    op3 = op1 + op2;
    op1.printa();
    op2.printa();
    op3.printa();
}