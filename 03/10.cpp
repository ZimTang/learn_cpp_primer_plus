#include <iostream>

int main(void)
{
  using namespace std;

  float a = 2.34E22;
  float b = a + 1.0;

  cout << "a = " << a << endl;
  // 0 因为 float的有效位数只有6位
  cout << "b - a = " << b - a << endl;

  return 0;
}