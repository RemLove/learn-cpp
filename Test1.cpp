#include<iostream>
using namespace std;

class Student
{
public:
	Student(int year=1,int month=1 ,int day=1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void print()
	{
		cout << _year << endl;
		cout << _month << endl;
		cout << _day << endl;
	}
	~Student()
	{
		cout << "hello" << endl;
	}
	bool operator>(const Student& sl)
	{
		return _year > sl._year;
	}
	int _age;
private:
	char name[20] = "Yue Wang";
	int _year;
	int _month;
	int _day;
};
int main()
{
	Student sl1(2026, 6, 7);
	sl1.print();
	Student sl2(100);
	sl2.print();
	sl1.operator>(sl2);///
	//sl.name = "Yue Wang";
	Student* p = NULL;
}