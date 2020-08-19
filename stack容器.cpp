#include<iostream>
#include<stack>

using namespace std;

//栈容器常用接口
void test01() {
	//创建栈容器
	stack<int> s;

	//向栈中添加元素 入栈或压栈
	s.push(10);
	s.push(20);
	s.push(30);

	while (!s.empty()) {
		cout << "栈顶元素：" << s.top() << endl;
		//弹出栈顶元素
		s.pop();
	}

	cout << "栈的大小：" << s.size() << endl;

}

int main() {
	test01();
	
	system("pause");
	return 0;
}