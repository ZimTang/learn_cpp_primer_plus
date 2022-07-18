#include <iostream>
#include <string>
#include <array>

using namespace std;

/*
  函数和array
 */
const int Seasons = 4;
array<string, Seasons> Snames = {"spring", "summer", "fall", "winter"};
void fill(array<double, Seasons> *pa);
void showArray(array<double, Seasons> arr);

int main(void)
{
  array<double, Seasons> expenses;
  // 传入地址而不应该是拷贝
  fill(&expenses);
  showArray(expenses);
  return 0;
}

void fill(array<double, Seasons> *pa)
{
  //方括号的优先级比*优先级高 (*pa)先将指针转换为array对象
  (*pa)[0] = 1;
  (*pa)[1] = 2;
  (*pa)[2] = 3;
  (*pa)[3] = 4;
}

void showArray(array<double, Seasons> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << endl;
  }
}
