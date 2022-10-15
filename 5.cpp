// Common friend function of more then one class//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class second;
class first
{
    int meter;
    friend void sum(first, second);

public:
    void inputdata()
    {
        cout << " Enter the distance in meter only:" << endl;
        cin >> meter;
    }
    void display()
    {
        cout << "\n Distance in meter:";
        cout << meter;
    }
};
class second
{
    int cmeter;

public:
    void inputdata()
    {
        cout << "\n enter the distance in centimeter only\n";
        cin >> cmeter;
    }
    void display()
    {
        cout << " distance in centimeter:" << cmeter;
    }
    friend void sum(first, second);
};
void sum(first a, second b)
{
    float dmeter = a.meter + b.cmeter / 100;
    float dcmeter = b.cmeter % 100;
    cout << "\n Sum of distance in meter in centimeter is:";
    cout << "\nMeters:=" << dmeter;
    cout << "\nCentimeters=" << dcmeter;
}
int main()
{
    first a;
    second b;
    cout << "\n Input data for an object a:";
    a.inputdata();
    cout << "\n Input data for an object b:";
    b.inputdata();
    cout << "\nOriginal values of an object a is :";
    a.display();
    cout << "\nOriginal values of an object b is :";
    b.display();
    sum(a, b);
}

// we can access private members of first class as well as second class,when we declare common
// friend function in first class the compiler does not know what is second mentioned in
// prototype of friend function so we declare second class before the first class this is
// called forward declaration which instruct the compiler that it is a class but it is
// defined later in the program.

// the friend function is declared in both classes but it is required to defined only once
// It may be defined in either of classes or outside the classes.
