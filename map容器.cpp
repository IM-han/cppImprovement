#include<iostream>
#include<map>
using namespace std;

void printMap(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	map<int, int> m;//默认构造
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	printMap(m);

	map<int, int>m2(m); //拷贝构造
	printMap(m2);

	map<int, int>m3;
	m3 = m2;
	printMap(m3);
}

//map大小
void test02() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	printMap(m);

	if (m.empty()) {
		cout << "m为空" << endl;
	}
	else {
		cout << "m不为空" << endl;
		cout << "m大小为：" << m.size() << endl;
	}
}

//交换
void test03() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 400));
	m2.insert(pair<int, int>(5, 500));
	m2.insert(pair<int, int>(6, 600));

	cout << "交换前：" << endl;
	printMap(m);
	printMap(m2);

	cout << "交换后：" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);
}

//插入和删除
void test04() {
	//插入方式
	map<int, int>m;
	//方式1
	m.insert(pair<int, int>(1, 1));
	//方式2
	m.insert(make_pair(2, 2));
	//方式3
	m.insert(map<int, int>::value_type(3, 3));
	//方式4
	m[4] = 40;

	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//清空
	//m.clear();
	m.erase(m.begin(), m.end());
	printMap(m);


}

//查找和统计
void test05() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//查找
	map<int, int>::iterator pos = m.find(34);
	if (pos != m.end()) {
		cout << "key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else {
		cout << "未找到该数据" << endl;
	}

	//统计
	int num = m.count(2);
	cout << "num = " << num << endl;
}

//排序
class MyCompare {
public:
	bool operator()(int v1, int v2)const {
		return v1 > v2;
	}
};

void test06() {

	map<int, int, MyCompare> m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 2));
	m.insert(make_pair(2, 40));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
}

int main() {
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();

	system("pause");
	return 0;
}