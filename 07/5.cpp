#include <iostream>
using namespace std;

/*
  函数和结构体
 */

struct travel_time
{
  int day;
  int hour;
};

void changeTravelTime(travel_time*);

int main(void)
{
  travel_time t1 = {5, 30};
  cout << t1.day << endl;
  changeTravelTime(&t1);
  cout << t1.day << endl;
  return 0;
}

void changeTravelTime(travel_time *t)
{
  t->day += 1;
  t->hour += 20;
}
