#include <iostream>

int stonetolb(int sts);

int main(void)
{
  using namespace std;

  cout << "Enter the weight the stones: " << endl;

  int stone;

  cin >> stone;

  int pounds = stonetolb(stone);

  cout << "result is " << pounds << endl;

  return 0;
}

int stonetolb(int sts)
{
  int pounds = 14 * sts;
  return pounds;
}