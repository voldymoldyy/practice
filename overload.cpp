#include <iostream>

class clock
{
    int hours;
    int mins;
    int sec;

public:
    void get()
    {
        std::cout << "enter hours: ";
        std::cin >> hours;
        std::cout << "enter min: ";
        std::cin >> mins;
        std::cout << "enter sec: ";
        std::cin >> sec;
    }

    clock operator+(clock c)
    {
        clock d;
        d.hours = hours + c.hours;
        d.mins = mins + c.mins;
        d.sec = sec + c.sec;
        if (d.mins >= 60)
        {
            d.hours++;
            d.mins = d.mins - 60;
        }
        if (d.sec >= 60)
        {
            d.mins++;
            d.sec = d.sec - 60;
        }
        return d;
    }

    void print()
    {
        std::cout << "time: ";
        std::cout << hours;
        std::cout << ": " << mins;
        std::cout << ": " << sec;
    }
};

int main()
{
    clock b, c, d;
    b.get();
    d.get();
    c = b + d;
    c.print();
}