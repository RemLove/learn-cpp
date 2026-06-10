#include<iostream>
using namespace std;
#include <cstdio>
//
//class Student
//{
//public:
//	Student(int year=1,int month=1 ,int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print()
//	{
//		cout << _year << endl;
//		cout << _month << endl;
//		cout << _day << endl;
//	}
//	~Student()
//	{
//		cout << "hello" << endl;
//	}
//	bool operator>(const Student& sl)
//	{
//		return _year > sl._year;
//	}
//	int _age;
//private:
//	char name[20] = "Yue Wang";
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Student sl1(2026, 6, 7);
//	sl1.print();
//	Student sl2(100);
//	sl2.print();
//	sl1.operator>(sl2);///
//	//sl.name = "Yue Wang";
//	Student* p = NULL;
//}
////实现一个日期
//class Data
//{
//public:
//	Data(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//拷贝构造
//	Data(const Data& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//	bool operator<(Data d)
//	{
//		return 1;
//	}
//	//析构函数茜
//	~Data()
//	{
//		cout << "Data() " << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Data d1;
//	d1.print();
//	Data d2(2026, 6, 8);
//	d2.print();
//	Data d3(d2);
//	d3.print();
//
//}
//class Stack
//{
//public:
//	//构造函数，系统会自动调用，进行初始化
//	Stack(int n=4)
//	{
//		_a = (int*)malloc(sizeof(int) * n);
//		_size = 0;
//		_capacity = n;
//	}
//	//析构函数，系统会自动调用，进行清理工作
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_size = 0;
//		_capacity = 0;
//	}
//	//拷贝构造，把sk1的值拷贝给sk2
//	Stack(const Stack& sk)
//	{
//		_a = (int*)malloc(sizeof(int) * sk._capacity);
//		_size = sk._size;
//		_capacity = sk._capacity;
//	}
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};
//int main()
//{
//	Stack sk1;
//	Stack sk2(sk1);
//}
//class Date
//{
//public:
//	//构造函数，初始化，函数体内赋值
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		printf("调用了构造函数\n");
//	}
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year),
//		_month(month)
//		, _day(day)
//	{
//		//初始化列表
//	}
//	//析构函数，销毁
//	~Date()
//	{
//		printf("调用了析构函数\n");
//	}
//	//拷贝函数
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		printf("调用了拷贝函数\n");
//	}
//	//运算符重载
//	//d3=d1转化为d3.operator=(d1)
//	Date& operator=(const Date& d)
//	{
//		if (this == &d)
//			return *this;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		printf("调用了运算符重载\n");
//		return *this;
//	}
//	void print()
//	{
//		cout << _year;
//		cout << _month;
//		cout << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(1, 1, 1);
//	d1.print();
//	Date d2(d1);
//	d2.print();
//	Date d3;
//	d3 = d1;
//}
class A
{
public:
	A(int a)
		:_a1(a)
		, _a2(_a1)
	{

	}
	void print()
	{
		cout << _a1 << " " << _a2 << endl;
	}
private:
	int _a2;
	int _a1;
	static int n;
};
int main()
{
	A a(1);
	a.print();
	return 0;
}