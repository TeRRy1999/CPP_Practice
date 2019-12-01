#include <iostream>
using namespace std;

void f(int a[]) // 這裡的 int a[] 跟 int *a一樣
{
	a = new int;
}

int main()
{
	int a[3]; // 這裡的 int a[] 跟 int *a不一樣
	a = new int; // 所以這行會錯
}