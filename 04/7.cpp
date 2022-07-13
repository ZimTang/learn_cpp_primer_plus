#include <iostream>
#include <cstring>

/*
  string 类 可以直接复制 str1 = str2
*/

int main(void)
{
  using namespace std;

  char charr2[20] = "curry";
  string str1;
  string str2 = "steph";

  cout << str2[2] << endl;
  cout << charr2[2] << endl;

  str1 = str2;

  cout << str1;

  return 0;
}