#include<iostream>
using namespace std;

#include<functional>
#include<vector>
#include<algorithm>

//算术仿函数
//1、取反
void test01() {
	negate<int> n;
	cout << n(-500) << endl;
}

//2、加法
void test02() {
	plus<int> p;
	cout << p(10, 20) << endl;
}

//3、减法
void test03() {
	minus<int> m;
	cout << m(30, 20) << endl;
}

//4、乘法
void test04() {
	multiplies<int>mt;
	cout << mt(2, 3) << endl;
}

//5、除法
void test05() {
	divides<int> d;
	cout << d(4, -2) << endl;
}

//6、取模
void test06() {
	modulus<int> md;
	cout << md(6, 3) << endl;
}

//关系仿函数

class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void test07() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	} 
	cout << endl;
	//内建仿函数， 大于仿函数
	sort(v.begin(), v.end(), greater<int>());
	//自己实现大于仿函数
	//sort(v.begin(), v.end(), MyCompare());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//逻辑仿函数
void test08() {
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//逻辑非 
	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<int>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}



int main() {
	/*test01();
	test02();
	test03();
	test04();
	test05();
	test06();*/
	//test07();
	test08();

	system("pause");
	return 0;
}