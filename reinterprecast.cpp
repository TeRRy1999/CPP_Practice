#include <iostream>

using namespace std;

class A
{

public:
	A(){a = 10;b = 20;};
private:
	int a;
	int b;
};


int main(int argc, char const *argv[])
{
	A apple;
	long int* p = reinterpret_cast<long int*>(&apple); 

	// cout << "tmp.a: " << tmp_ptr->getVal() << endl;
	cout << "tmp_ptr->a: " << *(p + 1) << endl;

	return 0;
}