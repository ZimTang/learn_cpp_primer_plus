#include <iostream>

/*
  数组的初始化
*/

int main(void)
{
  using namespace std;

  int yams[3];

  yams[0] = 7;
  yams[1] = 8;
  yams[2] = 6;

  int yamscost[3] = {20, 30, 5};

  cout << "size of yams array: " << sizeof(yams) << endl;
  cout << "size of yams element: " << sizeof(yams[0]) << endl;

  return 0;
}