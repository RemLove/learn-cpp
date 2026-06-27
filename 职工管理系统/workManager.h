#pragma once
#include<iostream>
#include<fstream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#define FILENAME "file.txt"
using namespace std;
class workManager
{
public:
	//构造函数
	workManager();
	//展示菜单
	void show_menu();
	//退出
	void exitSystem();
	//人数
	int _Empnums;
	//职工数组指针
	worker** EmpArr;
	//添加职工信息
	void AddEmp();
	//保存文件
	void Save();
	//判断文件是否为空
	bool FileIsEmpty;
	//读取文件中职工人数
	int GetNum();
	//把文件中的信息读到数组中
	void Init();
	//展示原始职工信息
	void Show_Emp();
	//判断职工是否存在,存在返回数组中下标，不存在返回-1
	int IsExist(int id);
	//修改职工
	void Med_Emp();
	//删除职工
	void Del_Emp();
	//查找职工
	void Find_Emp();
	//排序
	void Sort_Emp();
	//清除
	void Clear_Emp();
	//析构函数
	~workManager();
};