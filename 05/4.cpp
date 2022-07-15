#include <iostream>
#include <string>

/*
  string 类比较字符串
*/

using namespace std;

int main(void)
{
  string word = "?ate";

  for (char ch = 'a'; word != "mate"; ch++)
  {
    cout << word << endl;
    word[0] = ch;
  }

  cout << word << endl;

  return 0;
}