#include <iostream>
using namespace std;
void countDown(int n);

/*
 * 递归
 * */

int main(void)
{
	countDown(4);
	return 0;
}

void countDown(int n) 
{
	cout << "Counting down ..." << n << " address is " << &n << endl;
	if (n > 0) 
	{
		countDown(n-1);
	}
	cout << n << ": Kadom" << endl;
}


