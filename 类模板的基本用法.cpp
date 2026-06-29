/*#include<iostream>
#include<string>
using namespace std;
template<class TypeName=string,class TypeAge=int>
class Person
{
public:
	Person(TypeName name,TypeAge age)
	{
		_name = name;
		_age = age;
	}
	void show()
	{
		cout << _name << " " << _age << endl;
	}
	TypeName _name;
	TypeAge _age;
};
void test01()
{
	Person<>p("王越", 18);
	p.show();

}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
}*/