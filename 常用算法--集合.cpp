#include<iostream>
using namespace std;

#include<vector>
#include<algorithm>

class myPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

//求两个集合交集
//set_intersection

void test01() {

	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;

	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;

	vector<int>vTarget;

	//取两个容器中较小的值给目标容器开辟空间

	vTarget.resize(min(v1.size(), v2.size()));

	vector<int>::iterator itEnd =  set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint());
	cout << endl;
}

//求两个集合并集
void test02() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;

	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;

	vector<int>vTarget;

	//取两个容器的和给目标容器开辟空间
	vTarget.resize(v1.size() + v2.size());
	cout << vTarget.size() << endl;

	vector<int>::iterator itEnd =  set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint());
	cout << endl;
}

//求两个集合差集
void test03() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;

	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;

	vector<int>vTarget;

	//取两个容器中较大的值给目标容器开辟空间
	vTarget.resize(max(v1.size(), v2.size()));

	//返回目标容器的最后一个元素的迭代器地址
	cout << "v1与v2的差集为：" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint());
	cout << endl;

}

int main() {
	test01();
	//test02();
	//test03();

	system("pause");
	return 0;
}