/*#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
//创建一个圆，求圆的周长
const double PI = 3.14;

//圆类
class Circle
{
	//访问权限
public:
	//1.属性  半径
	int _r;
	//2.行为   计算圆
	double Perimeter()
	{
		return 2 * PI * _r;
	}
};

//练习--设计一个学生类
class Student
{
public:
	//1.属性
	string _name;//姓名
	int _number;//学号
	//2.行为
	//赋值
	void show()
	{
		cout << _name << endl;
		cout << _number << endl;
	}
	
};

int main()
{
	/*system("chcp 65001");
	//通过一个类，实例化创建一个具体的圆
	//Circle circle1;
	//circle1._r = 2;
	//double ret = circle1.Perimeter();
	//cout << ret << endl;
	Student s1;
	s1._name = "王越";
	s1._number = 2501;
	s1.show();
	const char* arr = "abcd";
	cout << sizeof(arr) << endl;
}*/
