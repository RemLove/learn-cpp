/*#include<iostream>
class makeDranking
{
public:
	//1.煮水
	virtual void boil() = 0;
	//2.倒水
	virtual void pour() = 0;
	//3.倒佐料
	virtual void add() = 0;
	//4.喝
	virtual void drink() = 0;
	void makedrinking()
	{
		boil();
		pour();
		add();
		drink();
	}
};
class Cafe :public makeDranking
{
	//1.煮水
	virtual void boil()
	{
		std::cout << "煮水" << std::endl;
	}
	//2.倒水
	virtual void pour()
	{
		std::cout << "倒水" << std::endl;
	}
	//3.倒佐料
	virtual void add()
	{
		std::cout << "倒咖啡" << std::endl;
	}
	//4.喝
	virtual void drink()
	{
		std::cout << "喝" << std::endl;
	}
};

class LaoDa :public makeDranking
{
	//1.煮水
	virtual void boil()
	{
		std::cout << "煮水" << std::endl;
	}
	//2.倒水
	virtual void pour()
	{
		std::cout << "倒水" << std::endl;
	}
	//3.倒佐料
	virtual void add()
	{
		std::cout << "倒红茶叶" << std::endl;
	}
	//4.喝
	virtual void drink()
	{
		std::cout << "喝" << std::endl;
	}
};
void test01()
{
	makeDranking* p = new LaoDa;
	p->makedrinking();
}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
}*/