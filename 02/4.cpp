#include <iostream>
#include <cmath>

/*
  函数的使用
*/

int main()
{
  using namespace std;

  double area;

  cout << "Enter the floor area, in square feet, of your home:";
  cin >> area;

  area = sqrt(area);

  cout << "your home is " << area << " big" << endl;

  return 0;
}