// code with deleberately error
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class sample
{
    int a, b, c;

public:
    void inputedata()
    {
        cout << "Enter the values of a,b,c:\n";
        cin >> a >> b >> c;
    }
    void display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
    }
    void calculate() const; // constant keyword in prototype
    int sum()
    {
        c = a + b;
        return c;
    }
};
// void sample ::calculate() const
// {
//     c = a + b;
// }
int main()
{
    sample x;
    x.inputedata();
    x.display();
    x.calculate();
    x.display();
    cout << x.sum();
}
//  Error  --> cannot modify a constant object;

// the keyword "const" should be in prototype and defination if we skip from either one then
// error occure as --> "sample :: calculate ()" is not a member of sample