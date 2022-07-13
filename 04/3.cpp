#include <iostream>
#include <cstring>

/*
  cin 会读取缓冲区里面的值，当遇到空白字符或者空格或者制表符的时候，会存进入到变量中，并终止输入
*/

int main(void)
{
  using namespace std;
  const int ArSize = 20;

  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name: " << endl;
  cin >> name;
  cout << "Enter your dessert: " << endl;
  cin >> dessert;

  return 0;
}