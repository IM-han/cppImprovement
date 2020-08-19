#include<iostream>
using namespace std;

void test01() {
	string str = "hello world";

	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << endl;
	}

	cout << "------------------" << endl;

	for (int i = 0; i < str.size(); i++) {
		cout << str.at(i) << endl;
	}

	str[0] = 'x';
	str.at(3) = 'y';
	cout << str << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}