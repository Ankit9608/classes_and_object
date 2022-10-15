// Static member function
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class example
{
    static int n;

public:
    example()
    {
        cout << "\n Object" << ++n << "is created" << endl;
    }
    void display()
    {
        cout << "\nTotal objects created:"
             << " " << n << endl;
    }
};
int example::n = 0;

int main()
{
    example a;
    a.display();
    example b;
    b.display();
    example c;
    c.display();
}