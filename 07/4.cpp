#include <iostream>
using namespace std;

/* 
  函数与字符数组
 */

char *buildStr(char c, int count);

int main(void)
{
  char c;
  int count;
  cout << "enter a charactar: ";
  cin >> c;
  cout << "enter count: ";
  cin >> count;

  char *ps = buildStr(c, count);
  cout << ps << endl;
  delete[] ps;

  return 0;
}

char *buildStr(char c, int count)
{
  char *pt = new char[count + 1];
  pt[count] = '\0';
  for (int i = 0; i < count; i++)
  {
    pt[i] = c;
  }
  return pt;
}