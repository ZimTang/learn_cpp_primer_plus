#include <iostream>
using namespace std;

/*
  for循环
*/

int main(void)
{
  int i;
  int sum = 0;

  for (i = 0; i < 5; i++)
  {
    sum += i;
  }

  cout << sum << endl;

  return 0;
}