#include <iostream>
using namespace std;

const double *f1(const double *ar, int n);
const double *f2(const double ar[], int n);
const double *f3(const double ar[], int n);


int main(void)
{
	double av[3] = {1112.3,1542.6,2226.9};
	// 定义函数指针
	const double* (*p1)(const double [], int) = f1;
	// 等价于上面
	auto p2 = f2;

	cout << "address value" << endl;
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) <<  endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	// 定义数组，数组里面元素是函数指针
	const double *(*pa[3])(const double *, int) = {f1, f2, f3};
	auto pb = pa;

	for (int i = 0; i < 3; i++)
	{
		cout << "address value" << pa[i](av, 3) << ": " <<  *pa[i](av, 3) << endl;
	}

	// pc是一个指针，指向一个由三个函数指针构成的数组
	// pc pd 指向相同
	auto pc = &pa;
	const double *(*pd)[3](const double *, int) = &pa;

	return 0;
}

const double *f1(const double *ar, int n)
{
	return ar;	
}

const double *f2(const double ar[], int n)
{
	return ar + 1;	
}

const double *f3(const double ar[], int n)
{
	return ar + 2;	
}
