#include <iostream>
#include <ctime>

/* 
  延迟执行
  其中 clock_t 是 int的类型别名
 */

int main(void)
{
  using namespace std;

  double sec;
  cout << "Enter delay sec: " << endl;
  cin >> sec;

  clock_t delay = sec * CLOCKS_PER_SEC;

  clock_t start = clock();

  while (clock() - start < sec)
    ;

  cout << "done" << endl;

  return 0;
}