#include <iostream>
#include <vector>
#include <array>

using namespace std;

/*
  vector 和 array
 */

int main(void)
{
  double a1[4] = {1.2, 2.4, 3.6, 4.8};

  vector<double> v1(4);
  v1[0] = 1.0 / 3.0;
  v1[1] = 2.0 / 3.0;
  v1[2] = 3.0 / 3.0;
  v1[3] = 4.0 / 3.0;

  array<double, 4> a2 = {3.14, 1.22, 2.44, 3.56};
  array<double, 4> a3;

  // 直接拷贝
  a3 = a2;

  // 数组越界 但是编译器不会报错 不安全 可以使用at()方法 a2.at(xxx) 它会捕获非法索引
  a2[-2] = 20;

  return 0;
}