#include <iostream>
using namespace std;

/*
 * 引用就是别名
 * */

int main(void)
{
	int rats = 20;
	int &rodents = rats;
	int bunney = 50;

	cout << rats << endl;
	cout << rodents << endl;

	rodents++;

	cout << rats << endl;
	cout << rodents << endl;

	cout << &rats << endl;
	cout << &rodents << endl;

	//  此处不相当于关联引用，而是赋值语句
	rodents = bunney;

	cout << rats << endl;
	cout << rodents << endl;
	cout << bunney << endl;

	return 0;
}
