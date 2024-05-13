#include <iostream>
using namespace std;

int main(){

  for (int i = 0; i < 10; i++)
  {
    int x, y;
    cout << "enter the value of x and y" << endl;
    cin >> x >> y;
    if (y == 0)
    {
      cout << "invalid number" << endl;
      continue;
    }
    else
    {
      cout << x/y << endl;
    }
  }
  return 0;
}