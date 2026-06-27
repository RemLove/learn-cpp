#include"workManager.h"
workManager::workManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//1.文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->_Empnums = 0;
		this->EmpArr = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2.文件存在但为空
	char ch;
	ifs >> ch;
	if (ifs.eof())//这个函数能判断文件是不是只剩一个结尾光标
	{
		cout << "文件存在但为空" << endl;
		this->_Empnums = 0;
		this->EmpArr = NULL;
		this->FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3.文件存在且有数据
	int num = GetNum();
	cout << "职工人数为:" << num << endl;
	this->_Empnums = num;

	this->EmpArr = new worker * [this->_Empnums];
	Init();
	this->FileIsEmpty = false;
}
//读取文件中职工人数
int workManager::GetNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	ifs.close();
	//this->_Empnums = num;
	return num;
}
//菜单
void workManager:: show_menu()
{
	//cout << "欢迎来到职工管理系统" << endl;
	cout << "欢迎来到职工管理系统" << endl;
	//cout << "0.退出管理系统" << endl;
	cout << "1.增加职工信息" << endl;
	cout << "2.显示职工信息" << endl;
	cout << "3.删除离职职工" << endl;
	cout << "4.修改职工信息" << endl;
	cout << "5.查找职工信息" << endl;
	cout << "6.按照编号排序" << endl;
	cout << "7.清空所有文档" << endl;
	//cout << endl;
}
//添加职工信息
void workManager::AddEmp()
{
	cout << "请输入要添加的职工人数" << endl;
	int nums;
	cin >> nums;
	if (nums > 0)
	{
		int NewNums = nums + this->_Empnums;
		worker** NewSpace = new worker * [NewNums];
		for (int i = 0; i < this->_Empnums; i++)
		{
			NewSpace[i] = this->EmpArr[i];
		}
		//已经把原来数组中的拷贝过来了
		//循环nums次，输入要添加职工的信息
		for (int i = 0; i < nums; i++)
		{
			int id;
			string name;
			int delect;
			cout << "请输入要添加职工的编号" << endl;
			cin >> id;
			cout << "请输入要添加职工的姓名" << endl;
			cin >> name;
			cout << "请输入要添加职工的职位编号" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> delect;
			worker* worker1 = NULL;
	
			if (delect == 1)
			{
				worker1 = new employee(id, name, 1);
			}
			else if (delect == 2)
			{
				worker1 = new manager(id, name, 2);
			}
			else if (delect == 3)
			{
				worker1 = new boss(id, name, 3);
			}
			else
			{
				cout << "输入有误" << endl;
			}
			NewSpace[this->_Empnums + i] = worker1;
		}
		//释放原有空间
		delete[]this->EmpArr;
		//更改空间指向
		this->EmpArr = NewSpace;
		//更新人数
		this->_Empnums = NewNums;
		this->FileIsEmpty = false;
		cout << "添加成功!" << endl;
		Save();
	}
	else//不添加
	{
		cout << "输入有误" << endl;
	}
	system("pause");
	system("cls");
}

//退出系统
void workManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
//保存文件
void workManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->_Empnums; i++)
	{
		ofs << this->EmpArr[i]->_id << " "
			<< this->EmpArr[i]->_name << " "
			<< this->EmpArr[i]->_depid << " " << endl;
	}
	ofs.close();
}
//把文件中的信息读到数组中
void workManager::Init()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	worker* worker = NULL;
	int i = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		if (dId == 1)//员工
		{
			worker = new employee(id, name, dId);
		}
		else if (dId == 2)//经理
		{
			worker = new manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new boss(id, name, dId);
		}
		this->EmpArr[i] = worker;
		i++;
	}
	ifs.close();
}
//展示原始职工信息
void workManager::Show_Emp()
{
	//判断文件是否为空
	if (this->FileIsEmpty)
	{
		cout << "文件为空" << endl;
	}
	else//文件不为空
	{
		for (int i = 0; i < this->_Empnums; i++)
		{
			this->EmpArr[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
//判断职工是否存在
int workManager::IsExist(int id)
{
	int dex = -1;
	for (int i = 0; i < this->_Empnums; i++)
	{
		if (this->EmpArr[i]->_id == id)
		{
			dex = i;
			break;
		}
	}
	return dex;
}
//删除职工
void workManager::Del_Emp()
{
	//判断文件是否存在或者为空
	if (this->FileIsEmpty)//如果为空
	{
		cout << "文件为空或者不存在" << endl;
	}
	else//文件不为空
	{
		cout << "请输入要删除职工的编号" << endl;
		int id = 0;
		cin >> id;
		int ret = this->IsExist(id);//判断输入的职工编号是否存在,不存在返回-1，存在返回数组下标
		if (ret != -1)//存在
		{
			for (int i = 0; i < this->_Empnums - 1; i++)
			{
				this->EmpArr[i] = this->EmpArr[i + 1];
			}
			cout << "删除成功！" << endl;
			this->_Empnums--;
			this->Save();
		}
		else//不存在
		{
			cout << "要删除的职工不存在" << endl;
		}
	}
	system("pause");
	system("cls");
}
//修改职工
void workManager::Med_Emp()
{
	//判断文件是否存在
	if (this->FileIsEmpty)//文件不存在
	{
		cout << "文件不存在或者为空" << endl;
	}
	else//文件存在
	{
		cout << "请输入要修改职工的编号" << endl;
		int id = 0;
		cin >> id;
		int ret=this->IsExist(id);
		if (ret != -1)//如果职工存在
		{
			delete this->EmpArr[ret];
			int newid;
			string newname;
			int newdid;
			cout << "查找到编号为" << id << "的职工" << endl;
			cout << "请输入新的职工编号" << endl;
			cin >> newid;
			cout << "请输入新的职工姓名" << endl;
			cin >> newname;
			cout << "请输入新的职工职位" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> newdid;
			worker* worker = NULL;
			if (newdid == 1)
			{
				worker = new employee(newid, newname, newdid);
			}
			else if (newdid == 2)
			{
				worker = new manager(newid, newname, newdid);
			}
			else if (newdid == 3)
			{
				worker = new boss(newid, newname, newdid);
			}
			else
			{
				cout << "输入职工职位有误" << endl;
			}
			cout << "修改成功" << endl;
			this->EmpArr[ret] = worker;
			this->Save();
		}
		else//职工不存在
		{
			cout << "职工不存在" << endl;
		}
	}
	system("pause");
	system("cls");
}
//查找职工
void workManager::Find_Emp()
{
	//判断文件是否存在或者为空
	if (this->FileIsEmpty)//如果文件为空
	{
		cout << "文件不存在或者为空" << endl;
	}
	else//文件存在
	{
		cout << "请选择要查找职工的方式" << endl;
		cout << "1.通过编号查找" << endl;
		cout << "2.通过姓名查找" << endl;
		int Slect;
		cin >> Slect;
		if (Slect == 1)//编号查找
		{
			cout << "请输入要查找职工的编号" << endl;
			int id;
			cin >>id;
			//判断是否存在
			int ret = this->IsExist(id);//存在返回数组下标，不存在返回-1
			if (ret != -1)//存在
			{
				cout << "找到了" << endl;
				this->EmpArr[ret]->showInfo();
			}
			else//不存在
			{
				cout << "职工不存在" << endl;
			}
		}
		if (Slect == 2)//姓名查找
		{
			cout << "请输入要查找职工的姓名" << endl;
			string name;
			cin >> name;
			for (int i = 0; i < this->_Empnums; i++)
			{
				if (this->EmpArr[i]->_name == name)
				{
					cout << "找到了" << endl;
					this->EmpArr[i]->showInfo();
					system("pause");
					system("cls");
					return;
				}
			}
			//没有找到
			cout << "没有找到" << endl;
		}
	}
	system("pause");
	system("cls");
}
//排序
void workManager::Sort_Emp()
{
	for (int i = 0; i < this->_Empnums; i++)
	{
		for (int j = 0; j <this->_Empnums-1-i; j++)
		{
			if (this->EmpArr[j+1]->_id < this->EmpArr[j]->_id)
			{
				worker* temp = this->EmpArr[j+1];
				this->EmpArr[j+1] = this->EmpArr[j];
				this->EmpArr[j] = temp;
			}
		}
	}
	//排序完成
	cout << "排序成功！" <<endl;
	this->Save();
	this->Show_Emp();
	system("pause");
	system("cls");
}
//清除
void workManager::Clear_Emp()
{
	cout << "确认清空?" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;
	int ret;
	cin >> ret;
	if (ret == 1)//确认清空
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->EmpArr != NULL)
		{
			for (int i = 0; i < this->_Empnums; i++)
			{
				delete this->EmpArr[i];
			}
		}
		this->_Empnums = 0;
		delete[] this->EmpArr;
		this->EmpArr = NULL;
		this->FileIsEmpty = true;
		cout << "清除成功！" << endl;
	}
	system("pause");
	system("cls");
}
workManager::~workManager()
{
	while (this->EmpArr!=NULL)
	{
		delete[] this->EmpArr;
		this->EmpArr = NULL;
	}
}