#include<iostream>
#include<list>
#include<string>
using namespace std;
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
	string m_name;
	int m_age;
	int m_height;
};
bool compare(Person p1, Person p2)
{
	return p1.m_age < p2.m_age;
}
void test01()
{
	list<Person>L;
	Person p3("Satella", 400, 180);
	Person p1("王越", 18, 160);
	Person p2("越王", 20, 170);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	//打印一下
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << " " << (*it).m_height << endl;
	}
	//排序
	L.sort(compare);
	//打印一下
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << " " << (*it).m_height << endl;
	}
}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
}