#include<iostream>
using namespace std;

#include<algorithm>
#include<vector>

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	//查找容器中是否有元素5
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) {
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到：" << *it << endl;
	}
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载
	bool operator==(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}

public:
	string m_Name;
	int m_Age;
};

void test02() {
	vector<Person> v;
	
	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);

	if (it == v.end()) {
		cout << "未找到" << endl;
	}
	else {
		cout << "找到姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}

//find_if

//adjacent_find//查找相邻重复元素

void test03() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	v.push_back(6);

	//查找相邻重复元素
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());

	if (it == v.end()) {
		cout << "未找到" << endl;

	}
	else {
		cout << "找到相邻重复元素：" << *it << endl;
	}
}

//binary_search 查找指定元素是否存在 无序序列中不可用
void test04() {
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	//二分查找
	bool ret = binary_search(v.begin(), v.end(), 2);

	if (ret) {
		cout << "找到了" << ret << endl;
	}
	else {
		cout << "未找到"  << endl;
	}
}

//5、统计元素个数
//count

void test05() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	v.push_back(6);

	int num = count(v.begin(), v.end(), 6);
	cout << "6的个数为：" << num << endl;

	num = count(v.begin(), v.end(), 4);
	cout << "4的个数为：" << num << endl;
}

//自定义数据类型
class Person2 {
public:
	string m_Name;
	int m_Age;

	Person2(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person2& p) {
		if (this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}
};

void test06() {
	vector<Person2> v;

	Person2 p1("刘备", 35);
	Person2 p2("关羽", 35);
	Person2 p3("张飞", 35);
	Person2 p4("赵云", 30);
	Person2 p5("曹操", 25);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person2 p("诸葛亮", 35);

	int num = count(v.begin(), v.end(), p);

	cout << "num = " << num << endl;
	
}

//count_if 按条件统计元素个数
class Greater {
public:
	bool operator()(int val) {
		return val >= 4;
	}
};

void test07() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), Greater());
	cout << "大于等于4的个数为：" << num << endl;
}


int main() {
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();

	system("pause");
	return 0;
}