// deleting dynamically created object
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class date
{
    int dd, mm, yy;

public:
    void inputedate()
    {
        cout << "Enter the date\n";
        cin >> dd >> mm >> yy;
    }
    void displaydata()
    {
        cout << "The entered date is\n";
        cout << dd << ":" << mm << ":" << yy << endl;
    }
};
int main()
{
    date *ptr;
    ptr = new date;
    ptr->inputedate();
    // ptr->inputedate();
    ptr->displaydata();
    delete ptr;
    // ptr->displaydata();
}

// dynamically allocated space for the