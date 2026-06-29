/*#include<iostream>
#include<string>
using namespace std;
template <class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		cout << "构造函数" << endl;
		m_capacity = capacity;
		m_pArray = new T[m_capacity];
		m_size = 0;
	}
	//拷贝构造，深拷贝
	MyArray(const MyArray& a)
	{
		cout << "拷贝构造" << endl;
		this->m_capacity = a.m_capacity;
		this->m_size = a.m_size;
		this->m_pArray = new T[this->m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->m_pArray[i] = a.m_pArray[i];
		}
	}
	//运算符=重载
	MyArray& operator=(const MyArray& a)
	{
		cout << "运算符operator=重载" << endl;
		if (this->m_pArray != NULL)
		{
			delete[] this->m_pArray;
			m_pArray = NULL;
			m_capacity = 0;
			m_size = 0;
		}
		this->m_capacity = a.m_capacity;
		this->m_size = a.m_size;
		this->m_pArray = new T[this->m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->m_pArray[i] = a.m_pArray[i];
		}
		return *this;
	}
	//尾插
	void push_back(T i)
	{
		//判断容量
		if (this->m_capacity == this->m_size)
		{
			return;
		}
		this->m_pArray[this->m_size] = i;
		this->m_size++;
	}
	//尾删
	void pop_back()
	{
		//判断是否还有值
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}
	//运算符[]重载，能访问值
	T& operator[](int i)
	{
		return this->m_pArray[i];
	}
	//返回数组容量
	int GetCapacity()
	{
		return this->m_capacity;
	}
	//返回数组大小
	int GetSize()
	{
		return this->m_size;
	}
	~MyArray()
	{
		cout << "析构函数" << endl;
		if (m_pArray != NULL)
		{
			delete[] m_pArray;
			m_pArray = NULL;
			m_capacity = 0;
			m_size = 0;
		}
	}
private:
	//指向数组
	T* m_pArray;
	//容量
	int m_capacity;
	//大小
	int m_size;
};*/