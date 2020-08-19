#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MyPrint(int val) {
	cout << val << endl;
}

void test01() {
	//创建vector容器对象，并且通过模板参数指定容器中存放的数据类型
	vector<int> v;
	//向容器中放数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();

	//遍历1
	while (pBegin != pEnd) {
		cout << *pBegin << endl;
		pBegin++;
	}
	cout << "++++++++++++++++++++++" << endl;
	//遍历2
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << "++++++++++++++++++++++" << endl;

	//遍历3
	for_each(v.begin(), v.end(), MyPrint);
}


int main() {
	test01();

	system("pause");
	return 0;
}