#include<iostream>
using namespace std;
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
//实现一个日期
class Data
{
public:
	Data(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//拷贝构造
	Data(const Data& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void print()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}
	bool operator<(Data d)
	{
		return 1;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Data d1;
	d1.print();
	Data d2(2026, 6, 8);
	d2.print();
	Data d3(d2);
	d3.print();
	
}