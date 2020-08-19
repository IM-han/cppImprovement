#include<iostream>
#include<queue>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01() {
	//��������
	queue<Person> q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 500);
	Person p4("ɳ����", 300);

	//����������Ԫ��
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//���в��ṩ����������֧���������
	while (!q.empty()) {
		//�����ͷԪ��
		cout << "��ͷԪ��--������ " << q.front().m_Name
			<< " ���䣺 " << q.front().m_Age << endl;

		cout << "��βԪ��--������ " << q.back().m_Name
			<< " ���䣺 " << q.back().m_Age << endl;

		cout << endl;
		//������ͷԪ��
		q.pop();
	}

	cout << "���д�С��" << q.size() << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}