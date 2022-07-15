#include <iostream>
using namespace std;

/*
  指针：保存的是地址

  一定要在对指针应用解除引用运算符*前，将指针初始化为一个确定的、适当的地址。
*/

int main(void)
{
  int num = 10;
  int* p_num = &num;
   
  // 强制转换
  int* p = (int*)0x7600;

  cout << p_num <<endl;

  return 0;
}