#include<iostream>
#include<fstream>
void test01()
{
	std::ofstream ofs;
	ofs.open("text.txt", std::ios::out);
	ofs << "越王" << std::endl;
	ofs.close();
}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
}
