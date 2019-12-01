#include <iostream>
using namespace std;

void f1(int *p)
{
	*p = 1;
}

void f2(int **p)
{
	*p = new int[3]{1, 2, 3};
}

int main()
{
	int a = 0;
	f1(&a);
	cout << a << endl;
	
	int *b;
	f2(&b);
	cout << b[0] << endl;
	cout << b[1] << endl;
	cout << b[2] << endl;
}