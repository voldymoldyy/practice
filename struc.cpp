#include <iostream>

int main()
{
    struct
    {
        int myname;
        std::string h;

    } mystructure;

    mystructure.h = "prayansh";
    std::cout << mystructure.h;
}