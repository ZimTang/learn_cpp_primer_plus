#include <iostream>
#include <climits>

/*
  sizeof 不是一个函数
  如果想查看一个类型的大小 需要加括号
  查看变量大小，括号加不加无所谓
*/

int main(void)
{
  using namespace std;

  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "int is " << sizeof(int) << " bytes" << endl;
  cout << "short is " << sizeof n_short << " bytes" << endl;
  cout << "long is " << sizeof n_long << " bytes" << endl;
  cout << "long long is " << sizeof n_llong << " bytes" << endl;

  cout << "Maximum values: " << endl;
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl;
  cout << "long long: " << n_llong << endl;

  return 0;
}