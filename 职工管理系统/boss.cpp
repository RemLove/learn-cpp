#include"boss.h"
//构造函数
boss::boss(int id, string name, int depId)
{
	this->_id = id;
	this->_name = name;
	this->_depid = depId;
}
//显示函数
void boss::showInfo()
{
	cout << "员工编号为：" << this->_id << endl;
	cout << "员工姓名为：" << this->_name << endl;
	cout << "员工部门为：" << GetNameDept() << endl;
}
//获取岗位名称
string boss::GetNameDept()
{
	return string("老板");
}