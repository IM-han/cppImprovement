#include<iostream>
#include<set>

using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//构造和赋值
void test01() {
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	printSet(s1);

	//拷贝构造
	set<int>s2(s1);
	printSet(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	printSet(s3);
}

//大小
void test02() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	if (s1.empty()) {
		cout << "s1为空" << endl;
	}
	else {
		cout << "s1不为空" << endl;
		cout << "s1大小为：" << s1.size() << endl;
	}

}

//交换
void test03() {
	
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(400);
	s2.insert(300);

	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);
	cout << endl;

	cout << "交换后：" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

//查找
void test04() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	
	set<int>::iterator pos = s1.find(100);
	if (pos != s1.end()) {
		cout << *pos << endl;
	}
	else {
		cout << "未找到" << endl;
	}

}

//统计
void test05() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	printSet(s1);

	int num = s1.count(100);

	cout << "num = " << num << endl;
}

//set和multiset区别
void test06() {
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);

	if (ret.second) {
		cout << "第一次插入成功" << endl;
	}
	else {
		cout << "第一次插入失败" << endl;
	}

	ret = s.insert(10);
	if (ret.second) {
		cout << "第二次插入成功" << endl;
	}
	else {
		cout << "第二次插入失败" << endl;
	}

	//multiset
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//pair对组
void test07() {
	//方式1
	pair<string, int> p("Tom", 20);
	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

	//方式2
	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

//set容器排序
class MyCompare {
public:
	bool operator()(const int& v1, const int& v2) const {
		return v1 > v2;
	}
};

void test08() {
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);

	//默认从小到大
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//指定排序规则
	set<int, MyCompare> s2;
	
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

class Person {
public:
	string m_Name;
	int m_Age;

	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
};

class comparePerson {
public:
	bool operator()(const Person& p1, const Person& p2)const {
		//按照年龄降序
		return p1.m_Age > p2.m_Age;
	}
};

void test09() {

	set<Person, comparePerson>s;

	Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++) {
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
	cout << endl;
}



int main() {
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	test09();

	system("pause");
	return 0;
}