#include <iostream>

int main(void)
{
  using namespace std;

  cout.setf(ios_base::fixed, ios_base::floatfield);

  cout << "9.0 / 5 = " << 9.0 / 5 << endl;
  cout << "9 / 5 = " << 9 / 5 << endl;

  // float 精度丢失
  cout << "1e7f / 9.0f = " << 1e7f / 9.0f << endl;
  cout << "1e7 / 9.0 = " << 1e7 / 9.0 << endl;

  return 0;
}