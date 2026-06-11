#include<iostream>
using namespace std;
void test01()
{
	//利用new关键字开辟一个空间，这个空间是在堆区，由程序员手动开辟和释放
	//返回的是元素的地址
	int* a = new int(1);
	cout << *a << endl;
	//开辟一个数组空间
	int* arr = new int[10];
	for (int i = 0;i < 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << endl;
	}
	delete(a);
	delete[]arr;//释放数组
}
void test02()
{
	int a = 10;
	int c = 20;
	//1.引用必须初始化
	int& b = a;
	//2.引用初始化后不可更改
	b = c;//不是改变别名，而是赋值操作
	cout << "a=" << a << endl;//20
	cout << "b=" << b << endl;//20
	cout << "c=" << c << endl;//20
}
//1.值传递
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递
void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//引用做左值操作
int& test03()
{
	static int a = 10;
	return a;
}
int main()
{
	/*int a = 10;
	int b = 20;*/
	//test01();
	//test02();
	//swap01(a, b);//交换失败
	//swap02(&a, &b);//交换成功
	//swap03(a, b);//交换成功
	int& ref = test03();
	cout << "a=" << ref << endl;
	cout << "a=" << ref << endl;
	//引用做左值操作
	test03() = 1000;//相当于a=1000
	cout << "a=" << ref << endl;
	cout << "a=" << ref << endl;
	return 0;
}
