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
	map<int, int> m;//Ĭ�Ϲ���
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	printMap(m);

	map<int, int>m2(m); //��������
	printMap(m2);

	map<int, int>m3;
	m3 = m2;
	printMap(m3);
}

//map��С
void test02() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	printMap(m);

	if (m.empty()) {
		cout << "mΪ��" << endl;
	}
	else {
		cout << "m��Ϊ��" << endl;
		cout << "m��СΪ��" << m.size() << endl;
	}
}

//����
void test03() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 400));
	m2.insert(pair<int, int>(5, 500));
	m2.insert(pair<int, int>(6, 600));

	cout << "����ǰ��" << endl;
	printMap(m);
	printMap(m2);

	cout << "������" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);
}

//�����ɾ��
void test04() {
	//���뷽ʽ
	map<int, int>m;
	//��ʽ1
	m.insert(pair<int, int>(1, 1));
	//��ʽ2
	m.insert(make_pair(2, 2));
	//��ʽ3
	m.insert(map<int, int>::value_type(3, 3));
	//��ʽ4
	m[4] = 40;

	printMap(m);

	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//���
	//m.clear();
	m.erase(m.begin(), m.end());
	printMap(m);


}

//���Һ�ͳ��
void test05() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//����
	map<int, int>::iterator pos = m.find(34);
	if (pos != m.end()) {
		cout << "key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else {
		cout << "δ�ҵ�������" << endl;
	}

	//ͳ��
	int num = m.count(2);
	cout << "num = " << num << endl;
}

//����
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