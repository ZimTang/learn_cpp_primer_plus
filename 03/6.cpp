#include <iostream>

int main(void)
{
  using namespace std;

  char ch = 'M';
  int i = ch;
  cout << "The ASCII code for " << ch << " is " << i << endl;

  ch += 1;
  i += 1;

  cout << "The ASCII code for " << ch << " is " << i << endl;
  cout.put(ch);
  cout.put('!');

  cout << endl
       << "Done" << endl;

  return 0;
}