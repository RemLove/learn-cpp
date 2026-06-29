/*#include<iostream>
#include<string>
using namespace std;
template<class T>
class MyArrayTest
{
public:
	MyArrayTest(int capacity)
	{
		cout << "构造函数" << endl;
		this->m_Capacity = capacity;
		this->m_pArray = new T[this->m_Capacity];
		this->m_Size = 0;
	}
	//拷贝构造
	MyArrayTest(const MyArrayTest& arr)
	{
		cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝
		this->m_pArray = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_pArray[i] = arr.m_pArray[i];
		}
	}
	//运算符operator=重载
	MyArrayTest& operator=(const MyArrayTest& a)
	{
		cout << "运算符=重载" << endl;
		this->m_Capacity = a.m_Capacity;
		this->m_Size = a.m_Size;
		//深拷贝
		this->m_pArray=new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->m_pArray[i] = a.m_pArray[i];
		}
		return *this;
	}
	//运算符[]重载
	T& operator[](int i)
	{
		return this->m_pArray[i];
	}
	//尾插
	void push_back(T a)
	{
		//判断容量和大小
		if (this->m_Size == this->m_Capacity)
		{
			return;
		}
		this->m_pArray[this->m_Size] = a;
		this->m_Size++;
	}
	//尾删
	void pop_back()
	{
		if (this->m_pArray != NULL)
		{
			this->m_Size--;
		}
	}
	int GetSize()
	{
		return this->m_Size;
	}
	~MyArrayTest()
	{
		cout << "析构函数" << endl;
		if (this->m_pArray != NULL)
		{
			delete[] this->m_pArray;
			this->m_pArray = NULL;
			this->m_Size = 0;
			this->m_Capacity = 0;
		}
	}
private:
	//指向数组
	T* m_pArray;
	//数组容量
	int m_Capacity;
	//数组大小
	int m_Size;
};*/