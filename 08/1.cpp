#include <iostream>
using namespace std;

/*
 * 内联函数
 * */

inline double square(double x){return x * x;}

int main(void)
{
	double a,b;
	double c = 13.0;

	a = square(5.0);
	b = square(6.0);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	c = square(c);

	cout << "c = " << c << endl;

	return 0;
}
