#include <iostream>
#include <string>
#include <cstring>

/*
  string 类通过+运算符进行拼接
*/

int main(void)
{
  using namespace std;

  string str1 = "curry";
  string str2 = "steph ";

  cout << str2 + str1 << endl;

  return 0;
}