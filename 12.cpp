// pointer to class variable
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
    void display()
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
    // date dob;

    void inputdata()
    {
        cout << "Enter the name\n";
        gets(name);
        cout << "Enter the designation\n";
        gets(desg);
        cout << "Enter age\n";
        cin >> age;
        cout << "Enter the date of birth";
        dob.inputdate();
    }
    void displaydata()
    {
        cout << "Name= ";
        puts(name);
        cout << "Designation= ";
        puts(desg);
        cout << "Age= ";
        cout << age << endl;
        cout << "Date of birth is=";
        dob.display();
        cout << "Date of joining=";
        doj.display();
    }
};
int main()
{
    emp x, *ptr;
    // emp y=(emp*)malloc(sizeof( emp));
    ptr = &x;
    ptr->inputdata();

    cout << "Enter the date of joining\n";
    ptr->doj.inputdate();
    (*ptr).displaydata();
    // cout << ptr;
    // cout << sizeof(ptr);
    // cout << (*ptr)->displaydata();
}

// pointer also access the public member of the class.....line no 27
// ptr is a pointer to to x variable of class emp
//  we can access the member function of the class emp by . operaator or *ptr
// line no 63 and 64