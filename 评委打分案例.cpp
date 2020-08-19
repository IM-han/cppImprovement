#include<iostream>
#include<vector>
#include<queue>
#include<time.h>

using namespace std;

//选手类
class Person {
public:
	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}

public:
	string m_Name;
	int m_Score;
};

void createPerson(vector<Person>& v) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的Person对象放入到容器中
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//将评委打分放入deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		sort(d.begin(), d.end());

		//除去最高分
		d.pop_back();
		//除去最低分
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;//累加每个评委的分数
		}

		int avg = sum / d.size();

		//将平均分赋值给选手
		it->m_Score = avg;
	}
}

//显示打分
void showScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "选手： " << it->m_Name << " 平均分： " << it->m_Score << endl;

	}
}

int main() {

	//设置随机种子
	srand((unsigned int)time(NULL));

	vector<Person>v;
	createPerson(v);

	setScore(v);

	showScore(v);

	system("pause");
	return 0;
}