#include <iostream>
using namespace std;

/*
  枚举
  枚举量是整型，可以被提升炜枚举类型，但int类型不能自动转换为枚举类型
  枚举值的范围是取枚举量的最大值的最小的2的幂，将它减去1，得到的就是范围上限
*/

enum Color {
  red = 0,
  green = 255
};

enum Postion {Left, Right, Top ,Bottom};

int main(void)
{
  Postion p = Bottom;
  // error
  // p = 200;

  // 类型转换
  p = Postion(200);


  cout << p << endl;
  cout << sizeof(p) << endl;

  return 0;
}