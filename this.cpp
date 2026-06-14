/*#include<iostream>
using namespace std;
class Person
{
public:
	Person(int m = 10)
	{
		_m = m;
	}
	Person& PersonAdd(Person& p)
	{
		_m += p._m;
		return *this;
	}
	int _m;
};
void test01()
{
	Person p1;
	Person p2;
	//链式编程    答案是60
	p1.PersonAdd(p2).PersonAdd(p1.PersonAdd(p2));
	cout << p1._m << endl;
}
int main()
{
	test01();
	return 0;
}*/