/*#include<iostream>
#include<string>
#include< cstdlib >

//1.加号运算符做重载
class Person
{
public:
	Person(int a=0,int b=0)
	{
		_a = a;
		_b = b;
	}
	//1.函数成员运算符重载
	/*Person operator+(const Person& pp)
	{
		Person p;
		p._a = this->_a + pp._a;
		p._b = this->_b + pp._b;
		return p;
	}
	//用不了方向反了，指向this了
	//void operator<<(std::ostream)
	//{
	//	std::cout << this->_a<< " " << this->_b << std::endl;
	//}
	int _a;
	int _b;
};
//2.全局函数运算符重载
Person operator + (Person & p1, Person & p2)
{
	Person p;
	p._a = p1._a + p2._a;
	p._b = p1._b + p2._b;
	return p;
}
//3.运算符重载可以复用
Person operator + (Person & p1, int b)
{
	Person p;
	p._a = p1._a + b;
	p._b = p1._b + b;
	return p;
}
//4.左移运算符
std::ostream& operator << (std::ostream& cout, Person& p)
{
	std::cout << p._a << " " << p._b << std::endl;
	return std::cout;
}
void test01()
{
	Person p1(10, 10);
	std::cout << p1 << std::endl;
}
///////////////////----------------------------------------/////////////
//5.递增运算符重载
class MyInterger
{
	friend std::ostream& operator<<(std::ostream& cout, MyInterger myint);
public:
	MyInterger(int num = 10)
	{
		_num = num;
	}
	//重装前置递增
	MyInterger& operator++()
	{
		this->_num++;
		return *this;
	}
	//重载后置递增
	MyInterger operator++(int)//int 是占位的，不然会和前置递增重命名
	{
		MyInterger temp = *this;
		_num++;
		return temp;
	}
	//前置递减
	MyInterger& operator--()
	{
		_num--;
		return *this;
	}
	//后置递减
	MyInterger operator--(int)
	{
		MyInterger temp = *this;
		_num--;
		return temp;
	}
private:
	int _num;
};
//6.重载左移运算符
std::ostream& operator<<(std::ostream& cout, MyInterger myint)
{
	std::cout << myint._num;
	return std::cout;
}
//前置++
void test02()
{
	MyInterger myint;
	std::cout << ++myint << std::endl;
	std::cout << myint << std::endl;
}
//后置++
void test03()
{
	MyInterger myint;
	std::cout << myint++ << std::endl;
	std::cout << myint << std::endl;
}
//前置--
void test04()
{
	MyInterger myint;
	std::cout << --myint << std::endl;
	std::cout << myint << std::endl;
}
//后置--
void test05()
{
	MyInterger myint;
	std::cout << myint-- << std::endl;
	std::cout << myint << std::endl;
}
//7.赋值运算符重载
class Person
{
public:
	Person(std::string name,int age)
	{
		p_age = new int(age);
		_name = name;
	}
	~Person()
	{
		if (p_age)
		{
			delete(p_age);
			p_age = nullptr;
		}
	}
	Person& operator=(Person& p)
	{
		if (p_age)
		{
			delete(p_age);
			p_age = nullptr;
		}
		p_age = new int(*p.p_age);
		return *this;
	}
	//关系运算符重载
	bool operator==(Person&p)
	{
		if (this->_name == p._name && *this->p_age == *p.p_age)
		{
			return true;
		}
		return false;
	}
	bool operator!=(Person& p)
	{

		if (this->_name == p._name && *this->p_age == *p.p_age)
		{
			return false;
		}
		return true;
	}
	std::string _name;
	int* p_age;

};
//赋值运算符重载
void test06()
{
	//Person p1(10);
	//Person p2(20);
	//Person p3(30);
	//p2 = p1 = p3;
	//std::cout << *p2.p_age << std::endl;
}
//关系运算符重载
void test07()
{
	Person p1("王越", 18);
	Person p2("越王", 18);
	if (p1 == p2)
	{
		std::cout << "相等" << std::endl;
	}
	else
	{
		std::cout << "不相等" << std::endl;
	}
	Person p3("王越", 18);
	Person p4("王越", 18);
	if (p3 != p4)
	{
		std::cout << "不相等" << std::endl;
	}
	else
	{
		std::cout << "相等" << std::endl;
	}
}
int main()
{
	system("chcp 65001");
	test07();
	system("pause");
}*/