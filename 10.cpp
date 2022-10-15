// nested function
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
class sample
{
  int a, b, c;
  void inputdata()
  {
    cout << "enter the values of a,b,c:" << endl;
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
  // s.inputdata();   // error private members can be accessed by the member
  // functions only
  s.display();
  return 0;
}