#include<iostream>
#include<string>
using namespace std;
class House;
class Goodgay
{
public:
	Goodgay();
	void visit01();
	void visit02();
private:
	House* house;
};

class House
{
	friend void Goodgay::visit02();
public:
	House()
	{
		_hall = "hall";
		_room = "room";
	}
	string _hall;
private:
	string _room;
};

Goodgay::Goodgay()
{
	house = new House;
}

void Goodgay::visit01()
{
	cout << "1正在访问" << house->_hall << endl;
}

void Goodgay::visit02()
{
	cout << "2正在访问" << house->_hall << endl;
	cout << "2正在访问" << house->_room << endl;
}

void test()
{
	Goodgay gay;
	gay.visit01();
	gay.visit02();
}


int main()
{
	system("chcp 65001");
	test();
	return 0;
}