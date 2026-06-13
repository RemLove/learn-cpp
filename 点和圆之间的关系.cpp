/*#include<iostream>
using namespace std;
#include "Circle.h"
#include "Point.h"
//判断关系
void CircleAndPoingt(Circle& c, Point p)
{
	//计算点到圆心的距离的平方
	int Distance =
		(c.GetPoint().GetX() - p.GetX()) * (c.GetPoint().GetX() - p.GetX()) +
		(c.GetPoint().GetY() - p.GetY()) * (c.GetPoint().GetY() - p.GetY());
	//计算半径的平方
	int Rdistance = c.GetR() * c.GetR();
	if (Distance == Rdistance)//圆上
	{
		cout << "点在圆上" << endl;
	}
	else if (Distance < Rdistance)//圆内
	{
		cout << "点在圆内" << endl;
	}
	else//圆外
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	system("chcp 65001");
	Point centre(0, 0);
	Circle circle(centre, 1);
	Point point(1, 0);
	CircleAndPoingt(circle, point);
	return 0;
}*/