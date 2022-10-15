#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class sample
{
    int a, b, c;
    void inputdata()
    {
        cout << " Enter the values of a,b,c:" << endl;
        cin >> a >> b >> c;
    }

public:
    void display()
    {
        inputdata();
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
    }
};
int main()
{
    sample s;
    // s.inputdata();s
    s.display();
    return 0;
}