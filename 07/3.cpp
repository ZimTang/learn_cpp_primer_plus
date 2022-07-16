#include <iostream>
using namespace std;

void show_array(const double arr[], int n);
int fill_array(double arr[], int size);

const int Max = 5;

int main(void)
{
  double properties[Max];
  int size = fill_array(properties, Max);
  show_array(properties, Max);
  return 0;
}

int fill_array(double arr[], int size)
{
  double temp;
  int i;
  for (i = 0; i < size; i++)
  {
    cout << "enter value #" << i + 1 << ": ";
    cin >> temp;
    if (!cin)
    {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input: input process terminated" << endl;
      break;
    }
    else if (temp < 0)
    {
      break;
    }
    else
    {
      arr[i] = temp;
    }
  }
  return i;
}

void show_array(const double arr[], int n)
{
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
}
