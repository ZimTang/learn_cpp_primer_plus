#include <iostream>
using namespace std;

/*
 * 函数指针
 * */

double Rick(int lines);
double Jack(int lines);
void estimate(int lines, double(*pf)(int));

int main(void)
{
	int code;
	cout << "How many lines of code do you need";
	cin >> code;
	cout << "Here is Rick's estimate: " << endl;
	estimate(code, Rick);
	estimate(code, Jack);
	
	return 0;
}

double Rick(int lines)
{
	return lines;
}

double Jack(int lines)
{
	return 0.9 * lines;
}

void estimate(int lines, double(*pf)(int))
{
	cout << lines << "lines code will take " << (*pf)(lines) << " hours."<<  endl;
}

