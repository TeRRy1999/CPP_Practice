#include <iostream>
using namespace std;

void f(int a[])
{
	cout << sizeof(a) << endl;;
}

int main()
{
	int a[3];
	cout << sizeof(a) << endl;;
	f(a);
}