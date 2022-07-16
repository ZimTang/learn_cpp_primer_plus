#include <iostream>
using namespace std;
/*
   拷贝的是地址，而不是数组本身
 */

int sum_Arr(int[], int);
const int arrSize = 5;

int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  cout << "arr address is " << arr << endl;
  cout << "size of arr is " << sizeof(arr) << endl;
  int sum = sum_Arr(arr, arrSize);
  cout << sum << endl;
  return 0;
}

int sum_Arr(int arr[], int n)
{
  cout << "arr copy address is " << arr << endl;
  cout << "size of is " <<  sizeof(arr) << endl;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum;
}