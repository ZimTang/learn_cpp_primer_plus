#include <iostream>

int main(void)
{
  using namespace std;
  int cheat = 42;
  int waist = 0x42;
  int iseam = 042;

  cout << cheat << endl;
  // 下面以后的以十六进制输出
  cout << hex;
  cout << waist << endl;
  // 下面以后的以八进制输出
  cout << oct;
  cout << iseam << endl;
  return 0;
}