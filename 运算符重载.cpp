#include<iostream>
#include< cstdlib >
/*
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
}*/
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
//重载左移运算符
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
int main()
{
	test05();
	system("pause");
}