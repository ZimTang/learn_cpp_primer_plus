#include <iostream>
#include <cstring>

using namespace std;

int main(void) 
{
  char animal[20] = "bear";
  const char *bird = "wren";
  char *ps;  

  cout << bird << endl;
  cout << animal << endl;

  ps = animal;

  cout << ps << endl;
  cout << (int *)animal << endl;

  ps = new char[strlen(animal) + 1];
  strcpy(ps, animal);

  cout << (int *)animal << endl;
  cout << (int *)ps << endl;

  delete []ps;

  return 0;
}