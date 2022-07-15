#include <iostream>
using namespace std;

/* 
  结构体 指针 数组的结合
 */

struct Player
{
  int age;
};

int main(void)
{

  Player p1, p2, p3;
  p1.age = 22;
  (&p2)->age = 33;

  Player ps[3] = {p1, p2, p3};

  (ps + 3)->age = 44;
  cout << p3.age << endl;

  Player *pointers[3] = {&p1, &p2, &p3};
  cout << pointers[0]->age << endl;

  Player **pps = pointers;
  cout << (*(pps) + 1)->age << endl;

  return 0;
}