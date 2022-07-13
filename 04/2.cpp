#include <iostream>
#include <cstring>

/*
  字符串
*/

int main(void)
{
  using namespace std;
  const int Size = 15;

  char name1[Size];
  char name2[Size] = "C++owboy";

  cout << "hello! I'm " << name2 << endl << "what is your name?" << endl;

  cin >> name1;
  cout << "my name is " << name1 << " len is " << strlen(name1) << endl;

  return 0;
}