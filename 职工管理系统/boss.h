#pragma once
#include"worker.h"
class boss :public worker
{
public:
	//构造函数
	boss(int id, string name, int depId);
	//显示函数
	virtual void showInfo();
	//获取岗位名称
	virtual string GetNameDept();
};