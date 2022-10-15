// Dynamic object
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class date
{
    int dd, mm, yy;

public:
    void inputdate()
    {
        cin >> dd >> mm >> yy;
    }
    void displaydate()
    {
        cout << dd << ":" << mm << ":" << yy << endl;
    }
};
class emp
{
    char name[20];
    char desg[20];
    int age;
    date dob;

public:
    date doj;
    void inputdata()
    {
        cout << "Enter Name\n";
        gets(name);
        cout << "Enter Designation\n";
        gets(desg);
        cout << "Enter age\n";
        cin >> age;
        cout << "Enter the DOB\n";
        dob.inputdate();
    }
    void displaydata()
    {
        cout << "Name=  ";
        puts(name);
        cout << endl;
        cout << "Designation=   ";
        puts(desg);
        cout << endl;
        cout << "Age=  ";
        cout << age << endl;
        cout << "Date of Birth=  ";
        dob.displaydate();
        cout << "Date of Joining=  ";
        doj.displaydate();
    }
};
int main()
{
    emp *ptr;
    ptr = new emp;
    ptr->inputdata();
    cout << "Enter the date of joining \n";
    ptr->doj.inputdate();
    ptr->displaydata();
}