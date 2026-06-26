#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
class employee :public worker
{
public:
	//构造函数
	employee(int id, string name, int depId);
	//显示函数
	virtual void showInfo();
	//获取岗位名称
	virtual string GetNameDept();
};
