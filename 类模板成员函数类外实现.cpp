/*#include<iostream>
#include<string>
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void show();
	T1 _name;
	T2 _age;
};
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->_name = name;
	this->_age = age;
}
template<class T1, class T2>
void Person<T1, T2>::show()
{
	std::cout << this->_name << " " << this->_age << std::endl;
}
void test01()
{
	Person<std::string, int> p("Satella", 400);
	p.show();
}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
}*/