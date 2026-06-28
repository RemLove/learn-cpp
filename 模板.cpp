#include<iostream>
using namespace std;
template<typename T>
//模板必须要确定T的数据类型才可以使用
void swap1(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	//1.自动推导
	swap1(a, b);
	//2.指定类型
	swap1<int>(a, b);
	cout << a << " " << b << endl;
}
template<typename T>
void Sort1(T arr[], int len)
{
	//选择排序
	for (int i = 0; i < len; i++)
	{
		int j = i + 1;
		while (j < len)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[j], arr[i]);
			}
			j++;
		}
	}
}
void test02()
{
	char arr[] = "acbdef";
	int nums = sizeof(arr) / sizeof(char);
	Sort1(arr, nums);
	for (int i = 0; i < nums; i++)
	{
		cout << arr[i] << endl;
	}
}
//普通函数和模板函数的区别
//1.普通函数会发生隐式类型的转换,例如test03，add(int a,int b)传入传入char c会自动转换成int型的
//2.模板函数用 自动类型推导 不能发生隐式类型的转换
//3.模板函数用 显示指定类型 可以发生隐式类型的转换
int add1(int a, int b)
{
	return a + b;
}
void test03()
{
	int a = 10;
	int b = 20;
	char c = 'c';//99
	int ret = add1(a, c);
	cout << ret << endl;
}
template<typename T>
T add2(T a, T b)
{
	return a + b;
}
void test04()
{
	int a = 10;
	int b = 20;
	char c = 'c';//99
	//int ret1 = add2(b, c);
	int ret2 = add2<int>(b, c);
	//cout << ret1 << endl;
	cout << ret2 << endl;
}
int main()
{
	system("chcp 65001");
	test04();
	system("pause");
	return 0;
}