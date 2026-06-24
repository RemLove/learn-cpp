/*#include<iostream>
class Calculate
{
public:
	virtual int getAnser()
	{
		return 0;
	}
	int _a;
	int _b;
};
class Add :public Calculate
{
public:
	virtual int getAnser()
	{
		return _a+_b;
	}
};
class Mul :public Calculate
{
public:
	virtual int getAnser()
	{
		return _a * _b;
	}
};
void test01()
{
	Calculate* p = new Mul;
	p->_a = 10;
	p->_b = 10;
	std::cout << p->getAnser() << std::endl;
}
int main()
{
	test01();
	return 0;
}*/