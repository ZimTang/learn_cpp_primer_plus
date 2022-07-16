#include <iostream>
using namespace std;
/*
  函数和数组结合
 */

int sum_Arr(int[]);
const int arrSize = 5;

int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  int sum = sum_Arr(arr);
  cout << sum << endl;
  return 0;
}

int sum_Arr(int arr[])
{
  int sum = 0;
  for (int i = 0; i < arrSize; i++)
  {
    sum += arr[i];
  }
  return sum;
}
