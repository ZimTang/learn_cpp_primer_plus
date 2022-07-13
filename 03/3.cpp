#include <iostream>

int main(void)
{
  using namespace std;
  int cheat = 42;
  int waist = 0x42;
  int iseam = 042;

  // 默认是以10进制输出
  cout << cheat << endl;
  cout << waist << endl;
  cout << iseam << endl;
  return 0;
}