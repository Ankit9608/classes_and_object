#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class emp
{
    char name[20];
    char deseg[20];
    int age;

public:        // private:
    class date // nested class
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

    }; // dob, doj, y;

private: // public:
    date dob, doj;

public:
    void inputdata()
    {
        cout << "Enter the the name of Candidate\n";
        gets(name);
        cout << "Enter the designation of the candidate\n";
        gets(deseg);
        cout << "Enter the age of candidate\n";
        cin >> age;
        cout << "Enter the date of birth\n";
        dob.inputdate();
        cout << "Enter the date of joining\n";
        doj.inputdate();
    }
    void display()
    {
        cout << "The name of candidate is\n";
        puts(name);
        cout << "The designation of candidate is \n";
        puts(deseg);
        cout << "The age of candidate is \n";
        cout << age << endl;
        cout << "The date of birth is\n";
        dob.display();
        cout << "The date of joining is \n";
        doj.display();
    }
} x;
int main()
{

    // emp::date dob, doj;
    emp x; // object of enclosed class
    x.inputdata();
    x.display();
    emp::date y; // object of nested class
    cout << "Enter a promotion due date\n";

    y.inputdate();
    cout << "Your promotion due date is \n";

    y.display();
}

//  class date is in public mode of emp;  the object of date i.e. dob and doj
// declared in private mode of emp class . the objects of date class can be ce-
// reated only inside the emp class.   can acces private members of date class
// in member function of date class they cannot be directly acceseed by emp cla
// s   the object of inner class date is created in main function (because it is
// declared in public mode of emp class)  by using scope resolution
