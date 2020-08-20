#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>

using namespace std;


//����
void myPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sort Ĭ�ϴ�С��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//�Ӵ�С����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

}

//���ϴ��
void test02() {
	srand((unsigned int)time(NULL));
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//�������˳��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

//�ϲ����� merge
void test03() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int> vtarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	vtarget.resize(v1.size() + v2.size());

	//�ϲ� ��Ҫ������������
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), vtarget.end(), myPrint);
	cout << endl;
}


//����Ԫ�ط�ת reverse
void test04() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "��תǰ�� " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	cout << "��ת�� " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


int main() {
	//test01();
	//test02();
	//test03();
	test04();

	system("pause");
	return 0;
}