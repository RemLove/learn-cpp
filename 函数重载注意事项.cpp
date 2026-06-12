/*#include<iostream>
using namespace std;
//1.引用作为函数重载的条件
void func(int& a)
{
	cout << "func(int& a)" << endl;

}
void func(const int& a)
{
	cout << "func(const int& a)" << endl;

}
//2.函数重载碰到默认参数
void func2(int a, int b=10)
{
	cout << "func2(int a, int b)" << endl;
}
void func2(int a)
{
	cout << "func2(int a)" << endl;
}
int main()
{
	int a = 1;
	//1.引用做为函数重载条件
	//func(a);//调用func( int& a)
	//func(1);//调用func(const int& a)
	//2.函数重载碰到默认参数
	//func2(10);//这时，出现二义性，第一个和第二个都可以调，编译器分不出来了

}*/