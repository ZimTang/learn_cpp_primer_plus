#include <iostream>
#include <string>
#include <cstring>

/*
  字符数组 和 string类的对比
*/

int main(void)
{
  using namespace std;

  char charr1[20];
  char charr2[20] = "curry";

  string str1;
  string str2 = "curry";

  str1 = str2;

  // 拼接
  strcpy(charr1, charr2);

  str1 += " paste ";
  strcat(charr1, " juces ");

  int len1 = str1.size();
  int len2 = strlen(charr1);

  cout << len1 << endl;
  cout << len2 << endl;
  cout << charr1 << endl;
  cout << str1 << endl;

  return 0;
}