#include <iostream>
using namespace std;

/* 
  new 关键字开辟内存空间
 */

int main()
{
  int nights = 1000;
  int* pt = new int;
  *pt = 1;
  cout << *pt << endl;
  pt = &nights;
  cout << *pt << endl;
  // 指针pt的地址
  cout << &pt << endl;
  cout << sizeof(pt) << endl;
  cout << sizeof(*pt) << endl;

  return 0;
}