#include<iostream>
using namespace std;

template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->mName = name;
		this->mAge = age;
	}

	void showPerson() {
		cout << "name: " << this->mName << "age: " << this->mAge << endl;
	}

public:
	NameType mName;
	AgeType mAge;
};

void test01() {
	//指定NameType 为string类型，AgeType为int类型
	Person<string, int>P1("孙", 999);
	P1.showPerson();
}

int main() {
	test01();

	system("pause");
	return 0;
}