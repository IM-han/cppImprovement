#include<iostream>
#include<stack>

using namespace std;

//ջ�������ýӿ�
void test01() {
	//����ջ����
	stack<int> s;

	//��ջ�����Ԫ�� ��ջ��ѹջ
	s.push(10);
	s.push(20);
	s.push(30);

	while (!s.empty()) {
		cout << "ջ��Ԫ�أ�" << s.top() << endl;
		//����ջ��Ԫ��
		s.pop();
	}

	cout << "ջ�Ĵ�С��" << s.size() << endl;

}

int main() {
	test01();
	
	system("pause");
	return 0;
}