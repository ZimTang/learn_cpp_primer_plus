#include <iostream>
#include <cstring>

/*
  stcmp() 用来比较字符串
*/

using namespace std;

int main(void)
{
  char word[5] = "?ate";

  for (char ch = 'a'; strcmp(word, "mate"); ch++)
  {
    cout << word << endl;
    word[0] = ch;
  }

  cout << word << endl;

  return 0;
}