#include<iostream>
#include<list>

using namespace std;

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//�Ƚ�
bool myCompare(int val1, int val2) {
	return val1 > val2;
}

//��ת������
void test01() {
	list<int> L;
	L.push_back(100);
	L.push_back(20);
	L.push_back(300);
	L.push_back(40);
	printList(L);

	//��ת����Ԫ��
	L.reverse();
	printList(L);

	//���� Ĭ�ϴ�С����
	L.sort();
	printList(L);

	//ָ���Ӵ�С
	L.sort(myCompare);
	printList(L);

}

int main() {
	test01();

	system("pause");
	return 0;
}