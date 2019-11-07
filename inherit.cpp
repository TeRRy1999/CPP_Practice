
#include <iostream>
using namespace std;

class parent
{
public:
	parent(){
		a = 10;
		c = 100;
		d = 1000;
	};
	void run(){cout << "here is parent" << endl;}
	int d;
protected:
	void test(){cout << "test" <<endl;}
	int a;
	int b;
private:
	int c;

};


class child:private parent
{
public:
	child(){};
	void run(){
		cout <<"parent: "<< a << endl; 
		cout << "here is child" << endl;
	}

	
};

class cell:child
{
public:
	cell(){};
	void run(){
		cout <<"parent parameter: "<< a << endl;
	}
	
};


int main()
{
	parent p;
	child c;
	cell cl;

	p.run();
	c.run();
	cl.run();

}

