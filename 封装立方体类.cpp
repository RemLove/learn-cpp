#include<iostream>
using namespace std;
//立方体类设计
//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体面积和体积
//4.分别利用全局函数和成员函数，判断两个立方体是否相等
class Cube
{
public:
	Cube(int l = 0, int h = 0, int w = 0)
	{
		_l = l;
		_h = h;
		_w = w;
	}
	int getL()const
	{
		return _l;
	}
	int getH()const
	{
		return _h;
	}
	int getW()const
	{
		return _w;
	}
	int calculateS()const//面积
	{
		cout << (_l * _h + _l * _w + _h * _w) * 2 << endl;
		return(_l *_h + _l * _w + _h * _w) * 2;
	}
	int calculateV()const//体积
	{
		cout << _l * _h * _w << endl;
		return _l * _h * _w;
	}
	//利用成员函数判断两个立方体是否相等
	bool IsSame2(const Cube& c)const
	{
		if (_l == c.getL() && _h == c.getH() && _w == c.getW())
		{
			return true;
		}
		return false;
	}
private:
	int _l;//长
	int _h;//高
	int _w;//宽
};
//利用全局函数，判断两个立方体是否相等
bool IsSame(const Cube& c1,const Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube c1(2, 2, 2);
	c1.calculateS();
	c1.calculateV();
	Cube c2(1,1,1);
	bool ret = IsSame(c1, c2);
	if (ret)//如果为真
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	system("pause");
	return 0;
}