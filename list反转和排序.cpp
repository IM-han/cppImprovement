#include<iostream>
#include<list>

using namespace std;

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//比较
bool myCompare(int val1, int val2) {
	return val1 > val2;
}

//反转和排序
void test01() {
	list<int> L;
	L.push_back(100);
	L.push_back(20);
	L.push_back(300);
	L.push_back(40);
	printList(L);

	//反转容器元素
	L.reverse();
	printList(L);

	//排序 默认从小到大
	L.sort();
	printList(L);

	//指定从大到小
	L.sort(myCompare);
	printList(L);

}

int main() {
	test01();

	system("pause");
	return 0;
}