/*#include<iostream>
using namespace std;
class Student
{
public:
	Student(int age=0)//构造函数
	{
		_age = age;
	}
private:
	int _age;
};
int main()
{
	Student* p1 = (Student*)malloc(sizeof(Student)); //申请空间
	Student* p2 = new Student;//申请空间+构造函数初始化
	free(p1);//释放空间
	delete(p2);//释放空间+析构函数
}
*/