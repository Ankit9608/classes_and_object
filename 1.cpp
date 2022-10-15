#include <iostream>
#include <conio.h>
#include <string.h>
class distance
{
private:
    int meter;
    int cmeter;

    //  private:
public:
    void inputdata()
    {
        std::cout << "enter the distance (in meter and centimeter)\n";
        std::cin >> meter >> cmeter;
    }
    void display();
} Y;
void distance::display()
{
    meter = meter + cmeter / 100;
    cmeter %= 100;
    std::cout << "\nThe distance enterd is:\n";
    std::cout << meter << "M\t" << cmeter << "CM";
}

int main()
{

    distance x;
    std::cout << "\nobject x\n";
    x.inputdata();
    x.display();
    std::cout << "\n object Y:\n";
    Y.inputdata();
    Y.display();
}
