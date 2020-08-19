#include<iostream>
#include<list>

using namespace std;

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//��С����

void test01() {
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	if (L1.empty()) {
		cout << "L1Ϊ��" << endl;
	}
	else {
		cout << "L1��Ϊ��" << endl;
		cout << "L1��СΪ�� " << L1.size() << endl;
	}

	//����ָ����С
	//L1.resize(10);
	printList(L1);

	//����ָ����С�����ƶ�Ĭ��ֵ
	L1.resize(10, 3);
	printList(L1);

	//�ƶ���С,����Ļ�ɾ��
	L1.resize(3);
	printList(L1);
}

int main() {
	test01();

	system("pause");
	return 0;
}