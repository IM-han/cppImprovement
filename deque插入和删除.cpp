#include<iostream>
#include<deque>

using namespace std;

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;
}

void test01() {
	deque<int> d;
	//尾部插入
	d.push_back(10);
	d.push_back(20);
	//头部插入
	d.push_front(40);
	d.push_front(50);

	printDeque(d);

	//尾部删除
	d.pop_back();

	//头部删除
	d.pop_front();

	printDeque(d);
}

//插入
void test02() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.insert(d.begin(), 10000);
	printDeque(d);

	d.insert(d.begin(), 2, 1000);
	printDeque(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	printDeque(d2);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);
}

//删除
void test03() {
	deque<int> d;
	
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.erase(d.begin());
	printDeque(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printDeque(d);
}

int main() {
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}