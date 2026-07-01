/*#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};
void CreatPerson(vector<Person>& v)
{
	string palyer = "ABCDE";
	int score = 0;
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += palyer[i];
		Person p(name, score);
		v.push_back(p);
	}
}
void SetScore(vector<Person>& v)
{
	for (int i = 0; i < 5; i++)
	{
		deque<int>d;
		for (int j = 0; j < 10; j++)//每个人都生成十个分数
		{
			int score = rand() % 41 + 60;//随机生成的分数60-100
			d.push_back(score);
			cout << score << " ";
		}
		cout << endl;
		sort(d.begin(),d.end());
		d.pop_back();
		d.pop_front();
		int sum = 0;
		for (int o = 0; o < d.size(); o++)
		{
			sum += d[o];
		}
		v[i].m_score = sum / d.size();
		cout << v[i].m_name << " " << v[i].m_score << endl;
	}
}
void test()
{
	//1.创建五个学生，放在容器里面
	vector<Person>v;
	CreatPerson(v);
	//2.给五名选手打分，放在队列容器里面
	SetScore(v);
}
int main()
{
	system("chcp 65001");
	test();
	system("pause");
}*/