/*#include<iostream>
class Animal
{
public:
	int m_age;
};
class Sheep :virtual public Animal
{

};
class Camel :virtual public Animal
{

};
//羊驼
class SheepCame :public Sheep, public Camel
{

};
void test01()
{
	SheepCame sc;
	sc.Sheep::m_age = 18;
	sc.Camel::m_age = 28;
	std::cout << sc.Sheep::m_age << std::endl;
	std::cout << sc.Camel::m_age << std::endl;

}
int main()
{
	test01();

	return 0;
}*/