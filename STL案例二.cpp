#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
class Worker
{
public:
	string m_name;
	int m_Salary;
};
void CreatWorker(vector<Worker>& vWorker)
{
	string nameSeed = "ABCDEFGHJK";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Salary = 0;
		//worker.m_name = "员工";
		worker.m_name += nameSeed[i];
		worker.m_Salary = rand()%10000 + 10000;
		vWorker.push_back(worker);
	}
}
void WorkerPrint(vector<Worker>& vWorker)
{
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << (*it).m_name << "   " << (*it).m_Salary << endl;
	}
}
void SetWorker(vector<Worker>&vWorker,multimap<int, Worker>& mWorker)
{
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		int Id = rand() % 3;
		mWorker.insert(make_pair(Id, (*it)));
	}
	//全部都放到map里面了
}
void ShowWorker(multimap<int, Worker>&mWorker)
{
	for (multimap<int, Worker>::iterator it = mWorker.begin(); it != mWorker.end(); it++)
	{
		cout << it->second.m_name << " " << it->second.m_Salary << endl;
	}
}
void test01()
{
	//创建十个员工，放到容器里面
	vector<Worker>vWorker;
	CreatWorker(vWorker);
	//打印一下信息
	WorkerPrint(vWorker);
	multimap<int, Worker>mWorker;
	SetWorker(vWorker, mWorker);
	//展示员工
	ShowWorker(mWorker);
}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
}