#include <iostream>
#include <cstring>

/*
*/

int main(void)
{
  using namespace std;

  int year; 
  char address[80];

  cout << "what year was your house build" << endl;
  (cin >> year).get();
  // cin.get();
  cout << "what is street address " << endl;
  cin.getline(address, 80);

  cout << "Year build: " << year << endl;
  cout << "Address: " << address << endl;

  return 0;
}