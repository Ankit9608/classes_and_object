// the this pointer
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class date
{
    int dd, mm, yy;

public:
    date *inputdate()
    {
        cout << "Enter the date\n";
        cin >> dd >> mm >> yy;
        return this;
    }
    void displaydate() // date *displaydate()
    {
        cout << "The entered date is \n";
        cout << this->dd << ":" << this->mm << ":" << this->yy << endl;
        // return this;
    }
    void displaydate1()
    {
        cout << "The entered data is\n";
        cout << (*this).dd << ":" << (*this).mm << ":" << (*this).yy << endl;
    }
};
int main()
{

    date x, y;
    date *ptr; //*ptr2;
    x.inputdate();
    x.displaydate();
    y.inputdate();
    y.displaydate1();
    ptr = x.inputdate();
    cout << "The address of x is\n";
    cout << ptr << endl;
    ptr = y.inputdate();
    cout << "The addess of y is\n";
    cout << ptr << endl;
    // ptr2 = x.displaydate();
    // cout << "The address of displaydate is" << ptr2;
    // the this pointer holds the address of the object and not the member function
    //
}