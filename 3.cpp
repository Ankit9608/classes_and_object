#include <iostream>
#include <conio.h>
class distanc
{
    int meter;
    int cmeter;

public:
    void inputdata()
    {
        std::cout << "Enter the distance (in meter and centimeter):\n";
        std::cin >> meter >> cmeter;
    }
    distanc callbyvalue(distanc Y)
    {
        Y.meter = Y.meter + Y.cmeter / 100;
        Y.cmeter = Y.cmeter % 100;
        return Y;
    }
    distanc callbyrefer(distanc &Y)
    {
        Y.meter = Y.meter + Y.cmeter / 100;
        Y.cmeter = Y.cmeter % 100;
    }
    void display()
    {
        std::cout << "\n Distance: ";
        std::cout << meter << " "
                  << "M"
                  << " " << cmeter << "CM"
                  << "\n";
    }
} X, Y, Z;
int main()
{
    std::cout << "\n Input data for object X:\n";
    X.inputdata();
    std::cout << "\n Input data for object Y:\n";
    Y.inputdata();
    std::cout << "\n original values of an object X:\n";
    X.display();
    std::cout << "\n After call by value and return an object\n";
    Z = X.callbyvalue(X);
    Z.display();
    std::cout << "\n The values for object X";
    X.display();
    std::cout << "\n Original values of an object Y:\n";
    Y.display();
    X.callbyrefer(Y);
    std::cout << "\n After call by reference the values are :\n";
    Y.display();
}