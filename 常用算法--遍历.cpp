#include<iostream>
using namespace std;

#include<algorithm>
#include<vector>

//for_each

//普通函数
void print01(int val) {
	cout << val << " ";
}

//函数对象
class print02 {

public:
	void operator()(int val) {
		cout << val << " ";
	}
};

//for_each算法基本用法
void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	//遍历算法
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}


//transform

class Transform {
public:
	int operator()(int val) {
		return val;
	}
};

class MyPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
	
};

void test02() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>vTarget; //目标容器
	vTarget.resize(v.size());
	transform(v.begin(), v.end(), vTarget.begin(), Transform());
	for_each(vTarget.begin(), vTarget.end(), MyPrint());

	cout << endl;
}

int main() {
	//test01();

	test02();

	system("pause");
	return 0;
}