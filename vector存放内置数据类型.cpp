#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MyPrint(int val) {
	cout << val << endl;
}

void test01() {
	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ���������
	vector<int> v;
	//�������з�����
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();

	//����1
	while (pBegin != pEnd) {
		cout << *pBegin << endl;
		pBegin++;
	}
	cout << "++++++++++++++++++++++" << endl;
	//����2
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << "++++++++++++++++++++++" << endl;

	//����3
	for_each(v.begin(), v.end(), MyPrint);
}


int main() {
	test01();

	system("pause");
	return 0;
}