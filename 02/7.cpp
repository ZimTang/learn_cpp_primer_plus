#include <iostream>

void simon(int n);

// using namespace std;
int main(void)
{

  simon(3);

  std::cout << "pick an integer: ";
  int count;
  std::cin >> count;
  simon(count);
  std::cout << "done";

  return 0;
}

void simon(int n)
{
  std::cout << "Simon says touch your toes " << n << " times." << std::endl;
}