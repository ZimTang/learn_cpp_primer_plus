#include <iostream>

void simon(int n);

int main(void)
{
  using namespace std;

  simon(3);

  cout << "pick an integer: ";
  int count;
  cin >> count;
  simon(count);
  cout << "done";

  return 0;
}

void simon(int n)
{
  using namespace std;

  cout << "Simon says touch your toes " << n << " times." << endl;
}