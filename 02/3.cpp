#include <iostream>

int main(void) {
  using namespace std;

  int carrots;

  cin >> carrots;
  cout << "I have ";
  cout << carrots;
  cout << " carrots";
  cout << endl;
  carrots = carrots - 1;

  cout << "Now I have " << carrots << " carrots";

  return 0;
}