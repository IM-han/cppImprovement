#include<iostream>
#include<list>

using namespace std;

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//大小操作

void test01() {
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	if (L1.empty()) {
		cout << "L1为空" << endl;
	}
	else {
		cout << "L1不为空" << endl;
		cout << "L1大小为： " << L1.size() << endl;
	}

	//重新指定大小
	//L1.resize(10);
	printList(L1);

	//重新指定大小，并制定默认值
	L1.resize(10, 3);
	printList(L1);

	//制定变小,多余的会删除
	L1.resize(3);
	printList(L1);
}

int main() {
	test01();

	system("pause");
	return 0;
}