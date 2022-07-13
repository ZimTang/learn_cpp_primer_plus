#include <iostream>
#include <cstring>

/*
  get(string, size) 保存换行符
  get() 读取下一个字符，及时是换行符
  cin.get()返回的是一个cin对象，所以可以链式调用
*/

int main(void)
{
  using namespace std;
  const int ArSize = 20;

  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name: " << endl;
  cin.get(name, ArSize).get();
  cout << "Enter your dessert: " << endl;
  // cin.get();
  cin.get(dessert, ArSize);

  cout << "My name is " << name << ". dessert is " << dessert;

  return 0;
}