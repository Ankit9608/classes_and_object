#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
class students
{
    int rollno;
    string stuname;
    char subname[5][20];
    string branch;
    int marks[5];
    char grade;

public:
    void inputdata()
    {
        std::cout << "\nEnter the roll no student:\n";
        std::cin >> rollno;
        std::cout << "\nStudent's Name:";
        std::cin >> stuname;
        std::cout << "\nEnter the subject's name\n";
        for (int i = 0; i < 5; i++)
        {
            std::cout << "\nSubject Name:";
            gets(subname[i]);
        }
        std::cout << "\n Enter the Branch:\n";
        std::cin >> branch;
        for (int i = 0; i < 5; i++)
        {
            std::cout << "\nMarks in" << i << "Subject:";
            std::cin >> marks[i];
        }
    }
    int calculate();
    void display()
    {
        std::cout << "\n Roll No:";
        std::cout << rollno;
        std::cout << "\n Students Name:";
        cout << stuname;
        std::cout << "\n Branch:";
        std::cout << branch;
        std::cout << "\n** Score Card:";
        for (int i = 0; i < 5; i++)
        {
            std::cout << "\n Subject Name:"
                      << " " << subname[i] << " "
                      << "Marks"
                      << " " << marks[i];
        }
        std::cout << "\n Grade:" << grade;
    }
};

int students::calculate()
{
    int i, sum = 0;
    float avg;
    for (i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    avg = sum / 5;
    if (avg > 75)
    {
        grade = 'H';
    }
    else if (avg > 65)
    {
        grade = 'G';
    }
    else if (avg > 50)
    {
        grade = 'A';
    }
    else
    {
        grade = 'F';
    }
}
int main()
{
    students x[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        x[i].inputdata();
        x[i].calculate();
    }
    for (i = 0; i < 2; i++)
    {
        x[i].display();
    }
}
