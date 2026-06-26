#pragma once
#include<iostream>
#include<string>
using namespace std;
class worker
{
public:
	//显示函数
	virtual void showInfo() = 0;
	//获取岗位名称
	virtual string GetNameDept() = 0;
	int _id;
	string _name;
	int _depid;
};