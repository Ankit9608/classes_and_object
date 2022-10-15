// container class
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class date
{
    int dd, mm, yy;

    // private:
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
    void input()
    {
        cout << "Name\n";
        gets(name);
        cout << " Designation\n";
        gets(desg);
        cout << "age\n";
        cin >> age;
        cout << "date of birth\n";
        dob.inputdate();
    }
    void display()
    {
        cout << " name= \t";
        puts(name);
        cout << "designation=\t";
        puts(desg);
        cout << "age=\t" << age;
        cout << "date of birth=\t";
        dob.displaydate();
        cout << "Date of joining=";
        doj.displaydate(); // function of date class
    }
};
int main()
{
    emp x;
    x.input();
    cout << " Enter the date of joining";
    x.doj.inputdate(); // doj is public member of class emp so it can be directly
    // accessed
    x.display();
    return 0;
}

// dob is in private mode of emp and doj is in public mode of emp
// so dob can be accessed by only member function of the emp class so that
// we can not access it from main function unlike the doj
// emp class is "Container Class " because it contain the object of another class
