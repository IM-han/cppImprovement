#include<iostream>
using namespace std;

#include<algorithm>
#include<vector>

class myPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

//���� copy

void test01() {
	vector<int> v1;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}

	vector<int> v2;
	v2.resize(v1.size()); //������ǰ���ٿռ�

	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;
}

//�滻
//replace
void test02() {
	vector<int> v;

	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	//�������е�20�滻Ϊ2000
	cout << "�滻��" << endl;
	replace(v.begin(), v.end(), 0, 2000);
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}

//replace_if

class ReplaceGreater30 {
public:
	bool operator()(int val) {
		return val >= 30;
	}
};

void test03() {
	vector<int> v;

	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	//�������е�20�滻Ϊ2000
	cout << "�滻��" << endl;
	replace_if(v.begin(), v.end(), ReplaceGreater30(), 1000);
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}


//�������� swap
void test04() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 10);
	}

	cout << "����ǰ��" << endl;
	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;

	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;

	cout << "������" << endl;
	swap(v1, v2);

	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;

	for_each(v2.begin(), v2.end(), myPrint());
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

