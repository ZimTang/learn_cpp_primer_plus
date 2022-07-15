#include <iostream>

using namespace std;

/*
  1. *++pt
  2. ++*pt
  3. (*pt)++
  4. *pt++
 */

int main(void)
{
  // * 和 ++ 运算符优先级相同，从右向左执行
  int arr[4] = {1, 10, 100, 1000};

  int *pt = arr;

  cout << "*++pt = ";
  cout << *++pt << endl;

  cout << "++*pt = ";
  cout << ++*pt << endl;

  cout << "(*pt)++ = ";
  cout << (*pt)++ << endl;

  cout << "*pt++ = ";
  cout << *pt++ << endl;

  return 0;
}