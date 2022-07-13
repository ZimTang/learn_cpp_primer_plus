#include <iostream>

int main(void)
{
  using namespace std;

  double hats, heads;

  cout.setf(ios_base::fixed, ios_base::floatfield);

  cout << "enter a number" << endl;

  cin >> hats;

  cout << "Enter another number" << endl;

  cin >> heads;

  cout << "hats = " << hats << " heads = " << heads << endl;

  cout << "hats + heads = " << hats + heads << endl;
  cout << "hats - heads = " << hats - heads << endl;
  cout << "hats / heads = " << hats / heads << endl;
  cout << "hats * heads = " << hats * heads << endl;

  return 0;
}