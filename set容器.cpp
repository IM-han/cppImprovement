#include<iostream>
#include<set>

using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//����͸�ֵ
void test01() {
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	printSet(s1);

	//��������
	set<int>s2(s1);
	printSet(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet(s3);
}

//��С
void test02() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	if (s1.empty()) {
		cout << "s1Ϊ��" << endl;
	}
	else {
		cout << "s1��Ϊ��" << endl;
		cout << "s1��СΪ��" << s1.size() << endl;
	}

}

//����
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

	cout << "����ǰ��" << endl;
	printSet(s1);
	printSet(s2);
	cout << endl;

	cout << "������" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

//����
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
		cout << "δ�ҵ�" << endl;
	}

}

//ͳ��
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

//set��multiset����
void test06() {
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);

	if (ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
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

//pair����
void test07() {
	//��ʽ1
	pair<string, int> p("Tom", 20);
	cout << "������" << p.first << " ���䣺" << p.second << endl;

	//��ʽ2
	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}

//set��������
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

	//Ĭ�ϴ�С����
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//ָ���������
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
		//�������併��
		return p1.m_Age > p2.m_Age;
	}
};

void test09() {

	set<Person, comparePerson>s;

	Person p1("����", 23);
	Person p2("����", 27);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++) {
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
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