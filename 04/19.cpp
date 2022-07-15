#include <iostream>

using namespace std;

/* 
  指针运算符
 */

int main(void)
{
  double arr1[3] = {100.00, 200.00, 300.00};
  short arr2[3] = {1, 10, 3};

  double *p1 = arr1;

  cout << p1 << endl;
  cout << p1 + 1 << endl;

  cout << arr2 << endl;
  cout << arr2 + 1 << endl;

  cout << *(arr2) << endl;
  cout << *(arr2 + 1) << endl;

  cout << sizeof(p1) << endl;
  cout << sizeof(arr1) << endl;

  cout << arr1 + 1 << endl;
  cout << &arr1 + 1 << endl;

  return 0;
}