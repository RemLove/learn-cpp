/*#include<iostream>
#include<string>
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		_name = name;
		_age = age;
	}
	T1 _name;
	T2 _age;
};
//1.传入指定类型
void print(Person<std::string, int>& p)
{
	std::cout << p._name << " " << p._age << std::endl;
}
void test01()
{
	Person<std::string, int>p("越王", 100);
	print(p);
}
//2.参数模板化
template<class T1,class T2>
void print2(Person<T1, T2>& p)
{
	std::cout << "T1的类型:" << typeid(T1).name() << std::endl;
	std::cout << "T2的类型:" << typeid(T2).name() << std::endl;
	std::cout << p._name << " " << p._age << std::endl;
}
void test02()
{
	Person<std::string, int>p("Satella", 400);
	print2(p);
}
//3.整个类模板化
template<class T>
void print3(T& p)
{
	std::cout << p._name << " " << p._age << std::endl;
}
void test03()
{
	Person<std::string, int>p("王越", 200);
	print3(p);
}
int main()
{
	system("chcp 65001");
	test03();
	system("pause");
}*/