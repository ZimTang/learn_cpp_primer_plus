#include <iostream>

int main(void)
{
  using namespace std;

  cout.setf(ios_base::fixed, ios_base::floatfield);

  float tub = 10.0 / 3.0;

  const double million = 1.0E6;

  cout << "tub = " << tub << endl;
  // float精度丢失
  cout << "A millon tubs = " << million * tub << endl;
  cout << "Ten millon tubs = " << million * tub * 10 << endl;

  double mint = 10.0 / 3.0;
  cout << "mint = " << mint << endl;
  cout << "A millon tubs = " << million * mint << endl;
  cout << "Ten millon tubs = " << million * mint * 10 << endl;

  return 0;
}