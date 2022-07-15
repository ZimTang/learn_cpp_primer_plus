#include <iostream>
#include <cstring>
using namespace std;

/* 
  动态存储例子
 */

char *getname(void);

int main(void)
{
  char *name = getname();
  cout << "your enter name is: " << name << endl;

  delete name;

  return 0;
}

char *getname(void)
{
  char tmp[90];
  cout << "Enter one name: " << endl;
  cin >> tmp;
  char *p = new char[strlen(tmp) + 1];
  strcpy(p, tmp);
  return p;
}