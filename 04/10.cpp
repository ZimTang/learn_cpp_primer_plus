#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
  using namespace std;

  char charr[20];
  string str;

  // 长度为6 代表第七个字符是/0, 里面都是垃圾值
  cout << "before input charr size: " << strlen(charr) << endl;
  // 长度为0
  cout << "before input charr size: " << str.size() << endl;

  cout << "Enter a line of text: " << endl;
  cin.getline(charr, 20);

  cout << "your enter is " << charr;

  cout << "Another a line of text: " << endl;
  getline(cin, str);
  cout << "You enterd: " << str;

  return 0;
}