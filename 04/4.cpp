#include <iostream>
#include <cstring>

/*
  getline(string, size) 不保存换行符，通过换行符来确定行尾
*/

int main(void)
{
  using namespace std;
  const int ArSize = 20;

  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name: " << endl;
  cin.getline(name, ArSize);
  cout << "Enter your dessert: " << endl;
  cin.getline(dessert, ArSize);

  cout << "My name is " << name << ". dessert is " << dessert;

  return 0;
}