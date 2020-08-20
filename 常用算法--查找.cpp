#include<iostream>
using namespace std;

#include<algorithm>
#include<vector>

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	//�����������Ƿ���Ԫ��5
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) {
		cout << "û���ҵ�" << endl;
	}
	else {
		cout << "�ҵ���" << *it << endl;
	}
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//����
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
	
	//��������
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
		cout << "δ�ҵ�" << endl;
	}
	else {
		cout << "�ҵ�������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}

//find_if

//adjacent_find//���������ظ�Ԫ��

void test03() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	v.push_back(6);

	//���������ظ�Ԫ��
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());

	if (it == v.end()) {
		cout << "δ�ҵ�" << endl;

	}
	else {
		cout << "�ҵ������ظ�Ԫ�أ�" << *it << endl;
	}
}

//binary_search ����ָ��Ԫ���Ƿ���� ���������в�����
void test04() {
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	//���ֲ���
	bool ret = binary_search(v.begin(), v.end(), 2);

	if (ret) {
		cout << "�ҵ���" << ret << endl;
	}
	else {
		cout << "δ�ҵ�"  << endl;
	}
}

//5��ͳ��Ԫ�ظ���
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
	cout << "6�ĸ���Ϊ��" << num << endl;

	num = count(v.begin(), v.end(), 4);
	cout << "4�ĸ���Ϊ��" << num << endl;
}

//�Զ�����������
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

	Person2 p1("����", 35);
	Person2 p2("����", 35);
	Person2 p3("�ŷ�", 35);
	Person2 p4("����", 30);
	Person2 p5("�ܲ�", 25);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person2 p("�����", 35);

	int num = count(v.begin(), v.end(), p);

	cout << "num = " << num << endl;
	
}

//count_if ������ͳ��Ԫ�ظ���
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
	cout << "���ڵ���4�ĸ���Ϊ��" << num << endl;
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