#include<iostream>
using namespace std;

#include<vector>
#include<algorithm>

//1��һԪν��
struct GreaterFive {
	bool operator()(int val) {
		return val > 5;
	}
};

void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "û�ҵ�" << endl;
	}
	else {
		cout << "�ҵ��ˣ�" << *it << endl;
	}
}

//��Ԫν��
class MyCompare {
public:
	bool operator()(int num1, int num2) {
		return num1 > num2;
	}
};

void test02() {
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	//Ĭ�ϴ�С����
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << endl;
	cout << "--------------------" << endl;

	//���÷º������Ӵ�С����
	sort(v.begin(), v.end(), MyCompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}