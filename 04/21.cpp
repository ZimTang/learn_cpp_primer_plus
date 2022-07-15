#include <iostream>
using namespace std;

/* 
  使用new关键字动态创建结构体
 */

struct Player {
  string name;
  int age;
};

int main(void)
{
  Player *p = new Player;
  p->name = "curry";
  (*p).age = 10;

  cout << (*p).name << endl;

  delete p;

  return 0;
}