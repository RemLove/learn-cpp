#include<iostream>
/*class Base
{
public:
	int _a;
protected:
	int _b;
private:
	int _c;
};
//public继承父类
class Son1 :public Base
{
public:
	void func()
	{
		_a = 10; //public继承父类，public还是public
		_b = 10;//public继承父类,protected还是protected,类内和子可以访问
		//_c = 10;//public继承父类，私有还是私有，子类不可以访问
	}
};
//protected继承父类
class Son2 :protected Base
{
public:
	void func()
	{
		_a = 10;
		_b = 10;//protected继承父类，public和protected都变成protected
		//_c = 10;//protected继承父类，私有还是私有，类外不可以访问
	}
};
void test02()
{
	Son2 s;
	//s._a = 10;
	//s._b = 10;
	//已经变成protected的，类外不可访问
}
class Son3 :private Base
{
	void func()
	{
		_a = 10;
		_b = 10;
		//_c = 10;
	}
};
class GrandSon :public Son3
{
	void func()
	{
		//_a = 10;
		//_b = 10;
		//都报错，说明继承private确实是把所有成员变成private,而不是protected，protected在子类可以访问，而pravate不行
	}
};
class Base1
{
public:
	Base1()
	{
		std::cout << "Base1的构造函数"<<std::endl;
	}
	~Base1()
	{
		std::cout << "Base1的析构函数" << std::endl;
	}
};
class Son01 :public Base1
{
public:
	Son01()
	{
		std::cout << "Son01的构造函数" << std::endl;
	}
	~Son01()
	{
		std::cout << "Son01的析构函数" << std::endl;
	}
};
void test03()
{
	//Base1 s;
	Son01 son;
}
*/
class Base
{
public:
	Base()
	{
		_m = 10;
	}
	void func()
	{
		std::cout << "Base-func" << std::endl;
	}
	void func(int a)
	{
		std::cout << "Base-func(int a)" << std::endl;
	}
	int _m;
};
class Son :public Base
{
public:
	Son()
	{
		_m = 20;
	}
	void func()
	{
		std::cout << "Son-func" << std::endl;
	}
	int _m;
};
void test01()
{
	Son s;
	std::cout << s._m << std::endl;
	std::cout << s.Base::_m << std::endl;
	s.func();
	s.Base::func(19);
}
int main()
{
	system("chcp 65001");
	test01();

	system("pause");
	return 0;
}