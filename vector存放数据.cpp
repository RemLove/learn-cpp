/*#include<iostream>
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

void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	1.第一种遍历方式
	vector<int>::iterator begin = v.begin();
	vector<int>::iterator end = v.end();
	while (begin != end)
	{
		cout << *begin << endl;
		begin++;
	}
	第二种遍历方式
	for (vector<int>::iterator p = v.begin(); p != v.end(); p++)
	{
		cout << *p << endl;
	}
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;

};
//容器存放自定义类型
void test02()
{
	vector<Person>v;
	Person p1("王越", 18);
	Person p2("越王", 18);
	Person p3("Satella", 400);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	for (vector<Person>::iterator begin = v.begin(); begin != v.end(); begin++)
	{
		cout << (*begin).m_name << " " << (*begin).m_age << endl;
	}
}
int main()
{
	system("chcp 65001");
	test02();
	system("pause");
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//容器嵌套容器
void test01()
{
	vector<vector<int>>v;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);
	v3.push_back(7);
	v3.push_back(8);
	v3.push_back(9);
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit) << " ";
		}
		cout << endl;
	}
}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
}*/