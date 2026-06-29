/*#include"MyArrayTest.hpp"
void test01()
{
	MyArrayTest<int>arr1(18);//18是数组容量
	MyArrayTest<int>arr2(20);
	arr2 = arr1;
	MyArrayTest<int>arr3(arr1);
}


class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void show(MyArrayTest<Person> arr)
{
	for (int i = 0; i < arr.GetSize(); i++)
	{
		cout << arr[i].m_name << " " << arr[i].m_age << endl;
	}
}
void test02()
{
	MyArrayTest<Person>arr1(10);
	Person p1("王越", 18);
	Person p2("越王", 18);
	Person p3("Satella", 400);
	arr1.push_back(p1);
	arr1.push_back(p2);
	arr1.push_back(p3);
	arr1.pop_back();
	show(arr1);
}
int main()
{
	system("chcp 65001");
	test02();
	system("pause");
}*/