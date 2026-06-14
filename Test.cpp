#include<iostream>
//using namespace std;
////1.引用做参数
//static void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int count1(int n)
//{
//	n++;
//	return n;
//}
////2.引用做返回值
//static int& count2(int n)
//{
//	n++;
//	return n;
//}
//static int add(int a, int b)
//{
//	return a + b;
//}
//int main1()
//{
//	//std::cout << "hello world" << std::endl;
//	//int a = 10;
//	//int& b = a;
//	////double& c = a;//错误
//	//const double& d = a;
//	int a = 10;
//	int b = 20;
//	swap(a, b);//可以，直接传的a和b
//	int c = add(a, b);
//
//	////////////
//	//int n1 = count(1);//错误，返回的是n的拷贝，不能修改，应该加const
//	const int n1 = count1(1);
//	int n2 = count2(1);
//
//	int a1 = 1;
//	int& b1 = a1;
//	int c1 = 2;
//	b1 = c1;
//	printf("%d", a1);
//}
/*template<class T>
//template<typename A>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 1;
	int b = 2;
	swap(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	double c = 3.14;
	double d = 5.21;
	swap(c, d);
	std::cout << c<< std::endl;
	std::cout << d << std::endl;
}*/
