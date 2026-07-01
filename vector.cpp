/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}
void print1(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
void test01()
{
	//1.默认构造
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	print(v1);
	//2.拷贝构造
	vector<int>v2(v1);
	print(v2);
	//3.区间方式构造
	vector<int>v3(v1.begin(), v1.end());
	print(v3);
	//4.n个elem方式构造
	vector<int>v4(10, 100);
	print(v4);
}
void test02()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	print(v);
	//       迭代器
	v.insert(v.begin(), 0);
	v.insert(v.begin(), 3,10);
	print(v);
	//v.erase(v.begin(),v.end());
	v.clear();
	print(v);
}
void test03()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "交换前v1:" << endl;
	print1(v1);
	vector<int>v2;
	for (int j = 9; j >= 0; j--)
	{
		v2.push_back(j);
	}
	cout << "交换前v2:" << endl;
	print(v2);

	v1.swap(v2);
	cout << "交换后v1:" << endl;
	print(v1);
	cout << "交换后v2:" << endl;
	print(v2);
}
//实际用途:缩小内存(利用匿名对象)
void test04()
{
	vector<int>v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "大小:" << v.size() << endl;
	cout << "容量:" << v.capacity() << endl;
	v.resize(10);
	vector<int>(v).swap(v);
	cout << "大小:" << v.size() << endl;
	cout << "容量:" << v.capacity() << endl;
}
int main()
{
	system("chcp 65001");
	test04();
	system("pause");
}*/