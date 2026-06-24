/*#include<iostream>
class CPU
{
public:
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		_cpu = cpu;
		_vc = vc;
		_mem = mem;
	}
	void doWork()
	{
		_cpu->calculate();
		_vc->display();
		_mem->storage();
	}
private:
	CPU* _cpu;
	VideoCard* _vc;
	Memory* _mem;
};
class Interl :public CPU, public VideoCard, public Memory
{
public:
	virtual void calculate()
	{
		std::cout << "Interl CPU" << std::endl;
	}
	virtual void display()
	{
		std::cout << "Interl VideoCard" << std::endl;
	}
	virtual void storage()
	{
		std::cout << "Interl Memory" << std::endl;
	}
};
class Lenovo :public CPU, public VideoCard, public Memory
{
public:
	virtual void calculate()
	{
		std::cout << "Lenovo CPU" << std::endl;
	}
	virtual void display()
	{
		std::cout << "Lenovo VideoCard" << std::endl;
	}
	virtual void storage()
	{
		std::cout << "Lenovo Memory" << std::endl;
	}
};
void test01()
{

}
int main()
{
	system("chcp 65001");
	test01();

	system("pause");
	return 0;
}*/