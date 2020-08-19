#include<iostream>
using namespace std;

void test01() {
	//≤È’“
	string str1 = "abcdefgde";
	int pos = str1.find("de");

	if (pos == -1) {
		cout << "Œ¥’“µΩ" << endl;
	}
	else {
		cout << "pos = " << pos << endl;
	}

	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;

}

void test02() {
	//ÃÊªª
	string str1 = "adfgfdef";
	str1.replace(1, 3, "2223");

	cout << "str1 = " << str1 << endl;
}

int main() {
	test01();

	test02();

	system("pause");
	return 0;
}