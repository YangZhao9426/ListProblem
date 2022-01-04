#include "List.h"
#include<iostream>
using namespace std;

int Menu()//菜单显示
{
	int choice = 0;
	cout << endl;
	cout << "***********************" << endl;
	cout << "** 【1】创建单链表   **" << endl;
	cout << "** 【2】显示单链表   **" << endl;
	cout << "** 【3】连接节点     **" << endl;
	cout << "** 【4】判断环的存在 **" << endl;
	cout << "** 【5】恢复为单链表 **" << endl;
	cout << "** 【6】判断相交     **" << endl;
	cout << "** 【0】退出系统     **" << endl;
	cout << "***********************" << endl;
	cout << "您选择的功能是：";
	cout << endl;
	cin >> choice;
	return choice;
}

int main(){
	Link_List<int> m_linklist;
	Link_Node<int> *temp = m_linklist.getHead();
	int choice = 0;
	int a, b, cho;
	do{
		choice = Menu();
		switch (choice){
		case 0: break;
		case 1: m_linklist.Input(); break;
		case 2:m_linklist.Output(m_linklist.getHead()); break;
		case 3: {
			cout << "请输入需要连接的元素m和n:";
			cin >> a >> b;
			cout << endl;
			temp=m_linklist.makeCircle(a, b);
			break;
		}
		case 4: {
			cout << "1.从源头节点开始判断" << endl;
			cout << "2.从新头节点开始判断" << endl;
			cout << "请输入:";
			cin >> cho;
			cout << endl;
			if (cho == 1)	m_linklist.checkLoop(m_linklist.getHead());
			if (cho == 2)	m_linklist.checkLoop(temp);
			break;
		}
		case 5: m_linklist.recoverLoop(m_linklist.getHead(), temp, a, b);	break;
		case 6:m_linklist.checkCross(m_linklist.getHead(), temp);	break;
		}
	} while (choice);
	system("pause");
	return 0;
}