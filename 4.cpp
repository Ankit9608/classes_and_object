#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Distance
{
    int meter;
    int cmeter;
    friend Distance sum(Distance, Distance);

public:
    void display()
    {
        cout << "\n distance\n";
        cout << meter << "m"
             << " " << cmeter << "cm\n";
    }
    void inputdata()
    {
        cout << "enter the distance in meter and centimeter:\n";
        cin >> meter >> cmeter;
    }
    friend void disfriend(Distance a)
    {
        cout << "\n distance\n";
        cout << a.meter << "m"
             << " " << a.cmeter << "cm\n";
    }
};
// void display(Distance x)               // class object is passed to function
// {                                      // it is not a member so not need to write x.disply
//     cout << "\n distance\n";           // if it would member fun the we can acces it by dot oper
//     cout << x.meter << "m"             // tor. we can also define this function in class
//          << " " << x.cmeter << "cm\n"; //
// }
Distance sum(Distance a, Distance b) // this is friend function defined outside the class
{                                    // but we need to declare first in the
    Distance c;
    c.meter = a.meter + b.meter + (a.cmeter + b.cmeter) / 100;
    c.cmeter = a.cmeter + b.cmeter + (a.cmeter + b.cmeter) % 100;
    return c;
}
int main()
{
    Distance x, y, z;
    cout << "enter the information for x objects" << endl;
    x.inputdata();
    cout << "enter the information for y object" << endl;
    y.inputdata();
    cout << "displalying original value of x" << endl;
    x.display();
    cout << "displaying the value of x using friend function:";
    disfriend(x);
    cout << endl;
    z = sum(x, y);
    cout << "display sum of distances of x and y:";
    cout << "using public member function:" << endl;
    z.display();
    cout << "\n display the sumof two distances using friend function" << endl;
    disfriend(z);
}