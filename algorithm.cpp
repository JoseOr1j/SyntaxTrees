#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 2;
  int x, y;
// this if statement is shown as a tree 
  if (a + b > 0)
  {
    x = a + b;
    y = x;
  }

  cout << "Values output: " << endl;
  cout << "A: " << a << endl;
  cout << "B: " << b << endl;
  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  cout << "The syntax tree is on my github" << endl;
  return 0;
}
