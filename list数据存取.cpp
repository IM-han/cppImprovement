#include<iostream>
#include<list>
using namespace std;

void test01() {
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << "��һ��Ԫ�أ� " << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ�� " << L1.back() << endl;

	list<int>::iterator it = L1.begin();
	/*cout << *it << endl;
	cout << *++it << endl;*/
	for (list<int>::iterator it = L1.begin(); it != L1.end(); it++) {
		cout << *it << endl;
	}

}

int main() {
	test01();

	system("pause");
	return 0;
}