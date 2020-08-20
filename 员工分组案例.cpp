#include<iostream>
using namespace std;

#include<vector>
#include<map>
#include<ctime>

/*
- ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
- Ա����Ϣ��: ���� ������ɣ����ŷ�Ϊ���߻����������з�
- �����10��Ա�����䲿�ź͹���
- ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
- �ֲ�����ʾԱ����Ϣ
*/

#define CEHUA 0
#define MEISU 1
#define YANFA 2

class Worker {
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v) {
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000;
		//��Ա����������
		v.push_back(worker);
	}
}

//Ա������
void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
		//����������ű��
		int depId = rand() % 3;

		//��Ա�����뵽����
		m.insert(make_pair(depId, *it));
	}
}

//������ʾ
void showWorkerByGroup(multimap<int, Worker>& m) {
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	//ͳ������
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "-----------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISU);
	count = m.count(MEISU); //ͳ����������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "-----------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

}

int main() {
	srand((unsigned int)time(NULL));

	//����Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//��ʾ����
	showWorkerByGroup(mWorker);


	system("pause");

	return 0;
}