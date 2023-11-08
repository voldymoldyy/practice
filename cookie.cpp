#include <iostream>

class cookie
{
public:
    int totalnoofcookies;
    int cookiesinbox;
    int boxesincontainer;
    int bleft = 0;
    int boxes = 0;
    int container = 0;

    int n_cookies()
    {
        std::cout << "enter total no.of cookies: ";
        std::cin >> totalnoofcookies;
    }
    int nb_cookies()
    {
        std::cout << "enter no.of cookies in each box: ";
        std::cin >> cookiesinbox;
    }
    int nbc_cookies()
    {
        std::cout << "enter no.of boxes in container: ";
        std::cin >> boxesincontainer;
    }
    int calcookie()
    {
        int left = 0;
        for (left = totalnoofcookies; left >= cookiesinbox; left = left - cookiesinbox)
        {
            boxes++;
        }
        return left;
    }

    int calboxes()
    {
        bleft = boxesincontainer - boxes;
        return bleft;
    }
    int countboxes()
    {
        if (boxes == 0)
        {
            boxes = 1;
        }
        return boxes;
    }
    int countcontainer()
    {
        for (boxes; boxes >= boxesincontainer; boxes = boxes - boxesincontainer)
        {
            container++;
        }
        if (container == 0)
        {
            container = 1;
        }
        return container;
    }
};

int main()
{
    cookie c;
    c.n_cookies();
    c.nb_cookies();
    c.nbc_cookies();

    if (c.cookiesinbox <= 24 && c.boxesincontainer <= 75)
    {

        std::cout << "cookie left: " << c.calcookie();
        std::cout << "\n";
        std::cout << "boxes left: " << c.calboxes();
        std::cout << "\n";

        std::cout << "boxes needed: " << c.countboxes();
        std::cout << "\n";
        std::cout << "container needed: " << c.countcontainer();
        std::cout << "\n";
    }
    else
    {
        std::cout << "A box of cookies can only hold 24 cookies, and a container can only hold 75 boxes of cookies.";
    }
    return 0;
}