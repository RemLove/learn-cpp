#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
void myPrint(int val)
{
	std::cout << val << std::endl;
}
void test01()
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	//迭代器
	// 第一种遍历方式
	//std::vector<int>::iterator itBegin = v.begin();//指向第一个元素
	//std::vector<int>::iterator itEnd = v.end();//指向末尾
	//while (itBegin != itEnd)
	//{
	//	std::cout << *itBegin << std::endl;
	//	itBegin++;
	//}
	//第二种遍历方式
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	//第三种遍历方式，用STL提供的
	std::for_each(v.begin(), v.end(), myPrint);
}
//容器存放自定义类型
class Person
{
public:
	Person(std::string name, int age)
	{
		_name = name;
		_age = age;
	}
	std::string _name;
	int _age;
};
void test02()
{
	std::vector<Person>v;
	Person p1("王越",18);
	Person p2("王越",18);
	Person p3("王越",18);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//std::cout << it->_name << "永远" << it->_age << std::endl;
		std::cout << (*it)._name << "永远" << (*it)._age << std::endl;
	}
}
void test03()
{
	std::vector<Person*>v;
	Person p1("王越", 18);
	Person p2("王越", 18);
	Person p3("王越", 18);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (std::vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//std::cout << it->_name << "永远" << it->_age << std::endl;
		std::cout << (*it)->_name << "永远" << (*it)->_age<< std::endl;
	}
}
int main()
{
	system("chcp 65001");
	test03();
	system("pause");
	return 0;
}