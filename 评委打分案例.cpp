#include<iostream>
#include<vector>
#include<queue>
#include<time.h>

using namespace std;

//ѡ����
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
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//��������Person������뵽������
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//����ί��ַ���deque������
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		sort(d.begin(), d.end());

		//��ȥ��߷�
		d.pop_back();
		//��ȥ��ͷ�
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;//�ۼ�ÿ����ί�ķ���
		}

		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ��
		it->m_Score = avg;
	}
}

//��ʾ���
void showScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "ѡ�֣� " << it->m_Name << " ƽ���֣� " << it->m_Score << endl;

	}
}

int main() {

	//�����������
	srand((unsigned int)time(NULL));

	vector<Person>v;
	createPerson(v);

	setScore(v);

	showScore(v);

	system("pause");
	return 0;
}