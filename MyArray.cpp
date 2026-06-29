/*#include"MyArray.hpp"
void test01()
{
	MyArray<int>arr1(100);
	for (int i = 0; i < 5; i++)
	{
		arr1.push_back(i);
		cout << arr1[i] << endl;
	}
	arr1.pop_back();
	cout << "size: " << arr1.GetSize() << endl;
	cout << "capacity: " << arr1.GetCapacity() << endl;
}
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};
void test02()
{
	MyArray<Person>arr(10);
	Person p1("王越", 18);
	Person p2("越王", 18);
	Person p3("Satella", 18);
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	for (int i = 0; i < arr.GetSize(); i++)
	{
		cout << arr[i].m_name << " " << arr[i].m_age << endl;
	}
}
int main()
{
	system("chcp  65001");
	test02();
	system("pause");
}*/