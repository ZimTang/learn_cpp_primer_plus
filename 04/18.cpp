#include <iostream>

using namespace std;

/* 
  delete 关键字用来释放内存
 */

int main(void)
{
  int* ps = new int;

  // 释放ps指向的那一段内存空间
  delete ps;

  int num = 5;
  int* pt = &num;
  // 不被允许
  // delete pt;

  // 不要创建两个指向同一个内存块的指针 不要释放两次同一块内存
  return 0;
}