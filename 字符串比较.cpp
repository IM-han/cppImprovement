#include<iostream>
using namespace std;

void test01() {

	string s1 = "hello";
	string s2 = "hillo";

	int ret = s1.compare(s2);
	cout << ret << endl;

	if (ret == 0) {
		cout << "s1 = s2" << endl;
	}
	else if (ret > 0) {
		cout << "s1 > s2" << endl;
	}
	else {
		cout << "s1 < s2" << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}