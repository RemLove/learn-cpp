#include<iostream>
int main()
{
	std::cout << "hello world" << std::endl;
	int a = 10;
	int& b = a;
	//double& c = a;//错误
	const double& d = a;
}