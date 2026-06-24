/*#include<iostream>
class Base
{
public:
	static int m_a;
	static void func()
	{
		std::cout << "base func" << std::endl;
	}
	static void func(int a)
	{
		std::cout << "base func(int a)" << std::endl;
	}
};
int Base::m_a = 10;
class Son :public Base
{
public:
	static int m_a;
	static void func()
	{
		std::cout << "son func" << std::endl;
	}
};
int Son::m_a = 20;
void test01()
{
	//1.通过对象来访问
	Son s;
	std::cout << s.m_a << std::endl;
	std::cout << s.Base::m_a << std::endl;
	//2.通过类名访问
	std::cout << Base::m_a << std::endl;
	std::cout << Son::m_a << std::endl;
	std::cout << Son::Base::m_a << std::endl;
}
void test02()
{
	Son s;
	//1.通过对象来访问静态成员函数
	s.func();
	s.Base::func();
	//2.通过类名来访问
	Base::func();
	Son::func();
	Son::Base::func(100);
}

int main()
{
	test02();
	return 0;
}*/