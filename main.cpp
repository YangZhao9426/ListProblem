#include "List.h"
#include<iostream>
using namespace std;

int Menu()//�˵���ʾ
{
	int choice = 0;
	cout << endl;
	cout << "***********************" << endl;
	cout << "** ��1������������   **" << endl;
	cout << "** ��2����ʾ������   **" << endl;
	cout << "** ��3�����ӽڵ�     **" << endl;
	cout << "** ��4���жϻ��Ĵ��� **" << endl;
	cout << "** ��5���ָ�Ϊ������ **" << endl;
	cout << "** ��6���ж��ཻ     **" << endl;
	cout << "** ��0���˳�ϵͳ     **" << endl;
	cout << "***********************" << endl;
	cout << "��ѡ��Ĺ����ǣ�";
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
			cout << "��������Ҫ���ӵ�Ԫ��m��n:";
			cin >> a >> b;
			cout << endl;
			temp=m_linklist.makeCircle(a, b);
			break;
		}
		case 4: {
			cout << "1.��Դͷ�ڵ㿪ʼ�ж�" << endl;
			cout << "2.����ͷ�ڵ㿪ʼ�ж�" << endl;
			cout << "������:";
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