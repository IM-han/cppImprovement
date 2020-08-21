#include<iostream>
using namespace std;

#include<vector>
#include<numeric>
#include<algorithm>


//����������Ԫ�ص��ܺ�
//accumulate

void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);

	cout << total << endl;
}

//�����������ָ��Ԫ��
//fill

class myPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}

};

void test02() {
	vector<int> v;
	v.resize(10);

	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}

