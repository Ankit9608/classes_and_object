// friend class
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class first
{
    int meter;
    friend class second;

public:
    void inputData()
    {
        cout << "Enter the value in meters: \n";
        cin >> meter;
    }
    void display()
    {
        cout << "The distance in meter: \n";
        cout << meter << " m"
             << "\n";
    }
};
class second
{

    int cmeter;

public:
    void inputdata()
    {
        cout << "Enter the distace in centimeters: \n";
        cin >> cmeter;
    }
    void display(first A)
    {
        cout << "Distance in meters: " << A.meter << "m"
             << "\n";
        cout << "Distance in centimeters: " << cmeter << "cm"
             << "\n";
    }
    void sum(first A)
    {
        float dmeter = A.meter + cmeter / 100;
        float dcmeter = cmeter % 100;
        cout << "The total distance is :\n";
        cout << dmeter << " m"
             << " " << dcmeter << " cm\n";
    }
};
int main()
{
    first A;
    second B;
    cout << "Inpute data for A\n";
    A.inputData();
    cout << "Inpute data for B:\n";
    B.inputdata();
    cout << "The values are: \n";
    A.display();
    cout << "value of object B:\n";
    B.display(A);
    cout << "the total distance i.e A+B=:\n";
    B.sum(A);
    return 0;
}
//  second class is the friend class of first it can access the private members of the first
// class only by passing the arguments of class first type so the display and sum function
// are defined with the parameters of first class type. The friend class can be declared in
// any access mode.