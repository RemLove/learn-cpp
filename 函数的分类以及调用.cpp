/*#include<iostream>
using namespace std;
//1.括号法
//2.显示法
//3.隐式转换法
class Person
{
public:
	//无参构造函数
	Person()
	{
		cout << "无参构造函数" << endl;
	}
	//有参构造函数
	Person(int a)
	{
		cout << "有参构造函数" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)
	{
		cout << "拷贝构造函数" << endl;
	}
};
//1.括号法
void test01()
{
	Person p1;//默认构造函数
	Person p2(1);//有参构造函数
	Person p3(p2);//拷贝构造函数
}
//2.显示法
void test02()
{
	Person p1;
	Person p2 = Person(1);//Person(1);匿名对象，调用完在这一行就销毁
	Person p3 = p2;
	//注意：不要用拷贝构造初始化匿名对象
	//Person(p3);//等价于 Person p3;
}
//3.隐式转换法
void test03()
{
	Person p4 = 10;//相当于 Person p4=Person(10);//有参构造
	Person p5 = p4;//相当于 Person p5=Person(p4);//拷贝构造
}
int main()
{
	system("chcp 65001");
	test03();
	return 0;
}*/