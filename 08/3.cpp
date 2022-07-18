#include <iostream>
using namespace std;

/* 
  引用交换和指针交换都是可以完成交换的
 */

void swapr(int &a, int &b);
void swapp(int *pa, int *pb);

int main(void)
{
  int wallet1 = 20;
  int wallet2 = 30;
  
  cout << wallet1 << endl;
  cout << wallet2 << endl;

  // 使用引用的方式交换
  swapr(wallet1, wallet2);

  cout << wallet1 << endl;
  cout << wallet2 << endl;

  // 使用指针的方式交换
  swapp(&wallet1, &wallet2);

  cout << wallet1 << endl;
  cout << wallet2 << endl;

  return 0;
}

void swapr(int &a, int &b)
{
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void swapp(int *pa, int *pb)
{
  int tmp;
  tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}
