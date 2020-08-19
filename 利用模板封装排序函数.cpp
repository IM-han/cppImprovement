#include<iostream>
using namespace std;

template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
//����ѡ�������������дӴ�С������
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int max = i;//��������±�
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			mySwap(arr[max], arr[i]);
		}
	}
}

template<typename T>
void printArray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01() {
	//����char����
	char charArr[] = "dbcdsagfr";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test02() {
	int intArr[] = { 1,4,6,9,0,2,3,7 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);

}

int main() {
	test01();

	test02();

	system("pause");
	return 0;
}