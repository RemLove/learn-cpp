#include"workManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
void test01()
{
	workManager mk;
	int choice = 0;
	while (true)
	{
		//展示菜单
		mk.show_menu();
		cout << "请输入你的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出
			mk.exitSystem();
			break;
		case 1://增加
			mk.AddEmp();
			break;
		case 2://显示
			mk.Show_Emp();
			break;
		case 3://删除
			mk.Del_Emp();
			break;
		case 4://修改
			mk.Med_Emp();
			break;
		case 5://查找
			mk.Find_Emp();
			break;
		case 6://排序
			mk.Sort_Emp();
			break;
		case 7://清空
			mk.Clear_Emp();
			break;
		default:
			system("pause");
		}
	}
}
void test02()
{
	worker* wk = new boss(1,"王越",2);
	wk->showInfo();
}
void test03()
{

}
int main()
{
	system("chcp 65001");
	test01();
	system("pause");
	return 0;
}