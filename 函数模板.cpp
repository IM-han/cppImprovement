#include<iostream>
using namespace std;

template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	string c = "hello";
	string d = "world";

	mySwap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}