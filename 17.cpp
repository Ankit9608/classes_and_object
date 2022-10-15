// static data member and static member functions
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class example
{
    static int n;

public:
    example()
    {
        cout << "\n Object number" << ++n << "is created" << endl;
    }
    static void display()
    {
        cout << "\nTotal number of object created= ";
        cout << n;
    }
};
int example::n = 0;

int main()
{
    example a;
    example::display();
    example b;
    example ::display();
    example c;
    example::display();
    example d, e, f;
    example::display();
}