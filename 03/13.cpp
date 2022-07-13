#include <iostream>

/*
  类型转换
*/

int main(void)
{
  using namespace std;

  cout.setf(ios_base::fixed, ios_base::floatfield);

  float tree = 3;

  int guess(3.9832);

  int debt = 7.2e12;

  cout << "tree is " << tree << endl;
  cout << "guess is " << guess << endl;
  // 溢出
  cout << "debt is " << debt << endl;

  return 0;
}