#pragma once
//enum bool{ false, true };
#include<iostream>
#include<stdlib.h>
using namespace std;

//template<typename T>
//class LinearList
//{
//public:
//	//	LinearList();//���캯��
//	//	~LinearList();//��������
//	virtual int Size()const = 0;//���������
////	virtual int Length()const = 0;//�����
//	virtual int Search(T& x)const = 0;//�ڱ�����������ֵx
////	virtual int Locate(int i)const = 0;//�ڱ��ж�λ��i��Ԫ�ص�λ��
//	virtual bool getData(int i, T& x)const = 0;//ȡ��i�������ֵ
////	virtual void setData(int i,T&x) = 0;//�޸ĵ�i�������ֵΪx
//	virtual bool Insert(T& y, T& x) = 0;//��Ԫ��y�����x
//	virtual bool InsertF(T& y, T& x) = 0;//��Ԫ��yǰ����x
//	virtual bool InsertM(T& y, T& x) = 0;//�ڶ��Ԫ��y�����x
//	virtual bool InsertMF(T& y, T& x) = 0;
//	virtual bool Insert_(int i, T& x) = 0;//�ڵ�i������������x
//	virtual bool Delete(T& x) = 0;//ɾ��Ԫ��x
//	virtual	bool Delete(int i, T& x) = 0;//ɾ����i�����ͨ��x����
//	virtual bool IsEmpty()const = 0;//�б��
//	virtual bool IsFull()const = 0;//�б���
////	virtual void Sort() = 0;//����
//	virtual void Input() = 0;//����
//	virtual void Output() = 0;//���
////	virtual LinearList<T>operator=(LinearList<T>&L) = 0;//���ƣ�
//};
//
//
//
//const int Csize = 100;
//template<typename T>
//class SeqList :
//	public LinearList<T>
//{
//protected:
//	T *data;//�������
//	int maxSize;//�����������
//	int last;//��ǰ��ű�������λ��(��0��ʼ)
//	//	void reSize(int newSize);//�ı�data����ռ��С���ݲ���Ҫ
//public:
//	SeqList(int sz = Csize);
//	//	SeqList(const SeqList<T>&L);//���ƹ��캯��
//	~SeqList() { delete[]data; };
//	int Size()const { return maxSize; }//��������ɸ���
////	int Length()const{ return last++; }//��ǰ����
//	int Search(T& x)const;//����x�ڱ���λ��,���������±�
//	bool getData(int i, T& x)const;//ȡ��i�������ֵ
//	bool Insert(T& y, T& x);//��ֵΪy�Ľڵ�����x
//	bool InsertF(T& y, T& x);//��ֵΪy�Ľڵ�ǰ����x
//	bool InsertM(T& y, T& x);//�ڶ��ֵΪy�Ľڵ�����x
//	bool InsertMF(T& y, T& x);//�ڶ��ֵΪy�Ľڵ�ǰ����x
//	bool Insert_(int i, T& x);
//	bool Delete(T& x);//ɾ��ֵΪx�Ľڵ�
//	bool Delete(int i, T& x);//ɾ����i�����ͨ��x����
//	bool IsFull()const { return(last == maxSize - 1) ? true : false; }//�б�շ�
//	bool IsEmpty()const { return(last == -1) ? true : false; }//�б�����
//	void Input();
//	void Output();
//};
//
//
//template<typename T>
//SeqList<T>::SeqList(int sz)
//{
//	if (sz > 0)
//	{
//		maxSize = sz;
//		last = -1;
//		data = new T[maxSize];
//		if (data == NULL)
//		{
//			cerr << "�ڴ�������" << endl;
//			exit(1);//���������е����˳�����
//		}
//	}
//}
//
////template<typename T>
////SeqList<T>::~SeqList(){  }
//
//template<typename T>
//int SeqList<T>::Search(T& x)const
//{
//	for (int i = 0; i <= last; i++)
//	{
//		if (data[i] == x) return i;
//	}
//	return 0;
//}
//
//template<typename T>
//bool SeqList<T>::getData(int i, T& x)const
//{
//	if (i > 0 && i <= last + 1)
//	{
//		x = data[i - 1];
//		return true;//���ݻ�ȡ�ɹ�
//	}
//	else return false;//���ݻ�ȡʧ��
//}
//
//template<typename T>
//bool SeqList<T>::Insert(T& y, T& x)
//{
//	if (last == maxSize - 1) return false;
//	for (int i = 0; i <= last; i++)
//	{
//		if (data[i] == y)
//		{
//			for (int j = last; j > i; j--)
//				data[j + 1] = data[j];
//			data[i + 1] = x;
//			last++;
//			cout << "����ɹ�" << endl;
//			return true;
//		}
//	}
//	cout << "δ���ҵ�Ԫ�أ�" << y << endl;
//	return false;
//}
//
//template<typename T>
//bool SeqList<T>::InsertM(T& y, T& x)
//{
//	if (last == maxSize - 1) return false;
//	for (int i = 0; i <= last; i++)
//	{
//		if (data[i] == y)
//		{
//			for (int j = last; j > i; j--)
//				data[j + 1] = data[j];
//			data[i + 1] = x;
//			last++;
//			i++;
//		}
//	}
//	return true;
//}
//
//template<typename T>
//bool SeqList<T>::InsertMF(T& y, T& x)
//{
//	if (last == maxSize - 1) return false;
//	for (int i = 0; i <= last; i++)
//	{
//		if (data[i] == y)
//		{
//			for (int j = last; j >= i; j--)
//				data[j + 1] = data[j];
//			data[i] = x;
//			last++;
//			i++;
//		}
//	}
//	return true;
//}
//
//template<typename T>
//bool SeqList<T>::InsertF(T& y, T& x)
//{
//	if (last == maxSize - 1) return false;
//	for (int i = 0; i <= last; i++)
//	{
//		if (data[i] == y)
//		{
//			for (int j = last; j >= i; j--)
//				data[j + 1] = data[j];
//			data[i] = x;
//			last++;
//			cout << "����ɹ�" << endl;
//			return true;
//		}
//	}
//	cout << "δ���ҵ�Ԫ�أ�" << y << endl;
//	return false;
//}
//
//template<typename T>
//bool SeqList<T>::Insert_(int i, T& x)
//{
//	if (last == maxSize - 1) return false;
//	if (i<0 || i>last + 1) return false;
//	for (int j = last; j >= i; j--)
//		data[j + 1] = data[j];
//	data[i] = x;
//	last++;
//	cout << "����ɹ�" << endl;
//	return true;
//}
//
//template<typename T>
//bool SeqList<T>::Delete(T& x)
//{
//	if (last == maxSize - 1) return false;
//	int i = 0;
//	while(i <= last)
//	{
//		if (data[i] == x)
//		{
//			for (int j = i; j < last; j++)
//				data[j] = data[j + 1];
//			last--;
//		}
//		else i++;
//	}
//	cout << "ɾ���ɹ���" << endl;
//	return true;
//}
//
//template<typename T>
//bool SeqList<T>::Delete(int i, T& x)
//{
//	if (last == -1) return false;
//	if (i<1 || i>last + 1) return false;
//	x = data[i - 1];
//	for (int j = i; j <= last; j++)
//		data[j - 1] = data[j];
//	last--;
//	cout << "ɾ���ɹ���" << endl;
//	return true;
//}
//
//template<typename T>
//void SeqList<T>::Input()
//{
//	cout << "��ʼ����˳������������Ԫ�ظ���(��0��ʼ����)��";
//	cin >> last;
//	cout << "��ʼ����" << endl;
//	for (int i = 0; i <= last; i++)
//	{
//		cin >> data[i];
//	}
//
//}
//
//template<typename T>
//void SeqList<T>::Output()
//{
//	cout << "˳���ǰԪ�����λ��Ϊ" << last << endl;
//	for (int i = 0; i <= last; i++)
//		cout << "#" << i + 1 << ":" << data[i] << '\t';
//}

template <typename T>
struct Link_Node
{
	T data;
	Link_Node<T>* next;
	Link_Node(Link_Node<T>* ptr = NULL) { next = ptr; } //��ʼ��ָ��Ĺ��캯��
	Link_Node(const T& item, Link_Node<T>* ptr = NULL) //��ʼ�����ݺ�ָ��Ĺ��캯�������ڴ����½ڵ�
	{
		data = item;
		next = ptr;
	}
};

template <typename T>
class Link_List
	// public LinearList<T>
{
	Link_Node<T>* first; //��������ͷָ��
	Link_Node<T>* f; //����˫ͷ����ͷָ��
public:
	Link_List()
	{
		first = new Link_Node<T>;
		f = new Link_Node<T>;
	}

	Link_List(const T& x)
	{
		first = new Link_Node<T>(x);
		f = new Link_Node<T>(x);
	}

	~Link_List() { makeEmpty(); }
	void makeEmpty();
	Link_Node<T>* Locate(int i); //������i��Ԫ�ص�λ��
	Link_Node<T>* Locate(Link_Node<T>* head, int i);
	Link_Node<T>* Search(T& x); //��λֵΪx�Ľڵ��λ��
	Link_Node<T>* getHead() { return first; }
	Link_Node<T>* makeCircle(T& m, T& n);
	Link_Node<T>* checkLoop(Link_Node<T>* first);
	Link_Node<T>* recoverLoop(Link_Node<T>* first, Link_Node<T>* head, T& m, T& n);
	Link_Node<T>* checkCross(Link_Node<T>* first, Link_Node<T>* head);

	int Length(Link_Node<T>* first);
	bool getData(int i, T& x);
	bool Insert(T& y, T& x); //Ԫ��y�����x
	bool InsertF(T& y, T& x); //Ԫ��yǰ����x
	bool InsertM(T& y, T& x); //���Ԫ��y�����x
	bool InsertMF(T& y, T& x);
	bool Insert_(int i, T& x);
	bool Delete(T& x);
	bool Reverse();
	bool ReverseList();
	bool Delete(int i, T& x); //ɾ����i�����ͨ��x����
	bool IsEmpty() { return first->next ? true : false; }
	bool judgePlace(T& m, T& n);
	void Input();
	void Output(Link_Node<T>* first);
};

template <typename T>
void Link_List<T>::makeEmpty()
{
	Link_Node<T>* q;
	while (!first->next == NULL)
	{
		q = first->next;
		first->next = q->next;
		delete q;
	}
}

template <typename T>
Link_Node<T>* Link_List<T>::Locate(int i)
{
	if (i < 0) return NULL;
	Link_Node<T>* p = first;
	int k = 0;
	while (p != NULL && k < i)
	{
		p = p->next;
		k++;
	}
	return p;
}

template <typename T>
inline Link_Node<T>* Link_List<T>::Locate(Link_Node<T>* head, int i)
{
	if (i < 0) return NULL;
	Link_Node<T>* p = head;
	int k = 0;
	while (p != NULL && k < i)
	{
		p = p->next;
		k++;
	}
	return p;
}

template <typename T>
Link_Node<T>* Link_List<T>::Search(T& x)
{
	Link_Node<T>* p = first->next;
	while (p != NULL)
	{
		if (p->data == x) break;
		else p = p->next;
	}
	return p;
}

template <typename T>
int Link_List<T>::Length(Link_Node<T>* first)
{
	int count = 0;
	Link_Node<T>* p = first->next;
	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return count;
}

template <typename T>
bool Link_List<T>::getData(int i, T& x)
{
	if (i <= 0) return NULL;
	Link_Node<T>* current = Locate(i);
	if (current == NULL) return false;
	else
	{
		x = current->data;
		return true;
	}
}

template <typename T>
bool Link_List<T>::Insert(T& y, T& x)
{
	Link_Node<T>* p = Search(y);
	if (p == NULL) return false;
	Link_Node<T>* newNode = new Link_Node<T>(x);
	newNode->next = p->next;
	p->next = newNode;
	return true;
}

template <typename T>
bool Link_List<T>::InsertF(T& y, T& x)
{
	Link_Node<T>* p = first; //pָ��ͷ��㣻
	for (p; p != NULL; p = p->next)
	{
		if (p->next->data == y)
		{
			if (p == NULL) return false;
			Link_Node<T>* newNode = new Link_Node<T>(x);
			newNode->next = p->next;
			p->next = newNode;
			break;
		}
	}
	return true;
}

template <typename T>
bool Link_List<T>::InsertM(T& y, T& x)
{
	Link_Node<T>* p = first; //pָ��ͷ��㣻
	for (p; p != NULL; p = p->next)
	{
		if (p->data == y)
		{
			Link_Node<T>* newNode = new Link_Node<T>(x);
			newNode->next = p->next;
			p->next = newNode;
			p = p->next;
		}
	}
	return true;
}

template <typename T>
bool Link_List<T>::InsertMF(T& y, T& x)
{
	Link_Node<T>* p = first; //pָ��ͷ��㣻
	for (p; p != NULL; p = p->next)
	{
		if (p->next == NULL) break;
		if (p->next->data == y)
		{
			Link_Node<T>* newNode = new Link_Node<T>(x);
			newNode->next = p->next;
			p->next = newNode;
			p = p->next;
		}
	}
	return true;
}

template <typename T>
bool Link_List<T>::Insert_(int i, T& x)
{
	Link_Node<T>* p = Locate(i);
	if (p == NULL) return false;
	Link_Node<T>* newNode = new Link_Node<T>(x);
	newNode->next = p->next;
	p->next = newNode;
	return true;
}

template <typename T>
bool Link_List<T>::Delete(T& x)
{
	//	T y;
	int len = Length();
	Link_Node<T>* p = first; //pָ��ͷ��㣻
	while (len)
	{
		if (p->next->data == x)
		{
			Link_Node<T>* del = p->next;
			p->next = del->next; //ɾ��ָ��λ�õĽڵ�
			delete del;
		}
		else p = p->next;
		if (p->next == NULL)break;
		len--;
	}
	return true;
}

template <typename T>
bool Link_List<T>::Delete(int i, T& x)
{
	Link_Node<T>* p = Locate(i - 1);
	Link_Node<T>* del = p->next;
	p->next = del->next;
	x = del->data;
	delete del;
	return true;
}

template <typename T>
void Link_List<T>::Input()
{
	int length = 0;
	T x;
	cout << "������Ԫ��,����-1��β:" << endl;
	Link_Node<T> *temp, *newNode;
	temp = first;
	while (1)
	{
		cin >> x;
		if (x != -1)
		{
			cout << '\t';
			newNode = new Link_Node<T>(x);
			temp->next = newNode;
			length++;
			temp = newNode;
		}
		else
		{
			temp->next = NULL;
			break;
		}
	}
	cout << "�����ɹ�" << endl;
}

template <typename T>
void Link_List<T>::Output(Link_Node<T>* temp)
{
	Link_Node<T>* p = temp->next;
	int i = 1;
	while (p != NULL)
	{
		cout << '#' << i++ << ":" << p->data << "\t";
		p = p->next;
	}
}

template <typename T>
inline bool Link_List<T>::judgePlace(T& m, T& n)
{
	int i = 0, j = 0;
	Link_Node<T> *head_1, *head_2;
	head_1 = head_2 = first;
	while (head_1->data != m)
	{
		head_1 = head_1->next;
		i++;
	}
	while (head_2->data != n)
	{
		head_2 = head_2->next;
		j++;
	}
	return (i < j);
}

template <typename T>
bool Link_List<T>::Reverse()
{
	Link_Node<T>* p = first->next;
	int len = Length();
	T a[100];
	int i = 0;
	while (p != NULL)
	{
		a[i] = p->data;
		p = p->next;
		i++;
	}
	int c = 1;
	for (int j = len - 1; j >= 0; j--)
	{
		cout << '#' << c++ << ":" << a[j] << "\t";
	}
	cout << endl;
	return true;
}

template <typename T>
bool Link_List<T>::ReverseList()
{
	Link_Node<T> *p = first->next, *q = f, *newNode;
	int lenp = Length(), lenq = 0;
	T x;
	while (lenp > 0)
	{
		getData(lenp, x);
		newNode = new Link_Node<T>(x);
		q->next = newNode;
		lenq++;
		lenp--;
		q = newNode;
	}
	Link_Node<T>* current = f->next;
	int i = 1;
	while (current != NULL)
	{
		cout << '#' << i++ << ":" << current->data << "\t";
		current = current->next;
	}
	return true;
}

template <typename T>
Link_Node<T>* Link_List<T>::makeCircle(T& m, T& n)
{
	Link_Node<T> *head_1, *head_2, *temp;
	head_1 = head_2 = first;
	while (head_1->data != m) head_1 = head_1->next; //�ҵ�m,n�ڵ�����λ��
	while (head_2->data != n) head_2 = head_2->next;
	if (head_1 == NULL || head_2 == NULL)
	{
		cout << "�ڵ��������" << endl;
		return NULL;
	}
	if (!judgePlace(m, n)) swap(head_1, head_2);
	if (head_2->next == NULL)
	{
		//��ʱ��Ϊ������
		head_2->next = head_1;
		Link_Node<T> *first_t = first->next;
		while (first_t != head_2)
		{
			cout << first_t->data << "\t";
			first_t = first_t->next;
		}cout << head_2->data << endl;
		return NULL;
	}
	else
	{
		Link_Node<T> *first_t1, *first_t2;
		temp = head_2->next;
		while (temp->next != NULL)
			temp = temp->next;
		f->next = head_2->next;
		temp->next = head_1;
		head_2->next = head_1;
		first_t1 = first->next, first_t2 = f->next;
		while (first_t1 != head_2)
		{
			cout << first_t1->data << "\t";
			first_t1 = first_t1->next;
		}cout << head_2->data << endl;
		while (first_t2 != head_2)
		{
			cout << first_t2->data<< "\t";
			first_t2 = first_t2->next;
		}cout << head_2->data << endl;
	}
	cout << "���ӳɹ�" << endl;
	return f;
}

template <typename T>
inline Link_Node<T>* Link_List<T>::checkLoop(Link_Node<T>* first)
{
	Link_Node<T> *slow = first, *fast = first, *tmp;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) break;
	}
	if (fast == NULL || fast->next == NULL)
	{
		return NULL;
	}
	else
	{
		fast = first;
		while (fast != slow)
		{
			fast = fast->next;
			slow = slow->next;
		}
		tmp = fast;
		while (tmp->next != fast)	tmp = tmp->next;
		cout << "���ڻ�" << endl;
		cout << "λ��Ϊ:" << fast->data << "\t" << tmp->data << endl;
	}
	return fast;
}

template <typename T>
inline Link_Node<T>* Link_List<T>::recoverLoop(Link_Node<T>* first, Link_Node<T>* head, T& m, T& n)
{
	if (first == NULL || head == NULL)
	{
		cout << "����ڵ�Ϊ��" << endl;
		return NULL;
	}
	else
	{
		Link_Node<T> *head_1 = first, *tmp = head, *node;
		if (!judgePlace(m, n)) swap(m, n);
		while (head_1->data != n) head_1 = head_1->next;
		head_1->next = NULL;
		cout << "����ָ��ɹ�" << endl;
		cout << "Դ����";
		Output(first);
		cout << endl;
		cout << "������";
		Output(head);
		cout << endl;
		cout << "��������м�ڵ��ֵ" << endl;
		cout << "1.Դͷ�ڵ�" << endl;
		cout << "2.��ͷ�ڵ�" << endl;
		int len, n;
		cin >> n;
		if (n == 1)
		{
			len = Length(first);
			tmp = first;
		}
		else
		{
			len = Length(head);
			tmp = head;
		}
		if (len % 2 == 0)
		{
			node = Locate(tmp, len / 2);
			cout << "�м����ڵ��ֵΪ��" << node->data << "\t";
			cout << Locate(tmp, len / 2 + 1)->data << endl;
			return node;
		}
		else
		{
			node = Locate(tmp, len / 2 + 1);
			cout << "�м�ڵ��ֵΪ��" << node->data << endl;
			return node;
		}
	}
}

template <typename T>
inline Link_Node<T>* Link_List<T>::checkCross(Link_Node<T>* first, Link_Node<T>* head)
{
	Link_Node<T> *head_1 = checkLoop(first), *head_2 = checkLoop(head);
	if (head_1 || head_2)
	{
		cout << "�������ཻ���ཻ����ֵΪ��" << head_1->data << endl;
		return head_1;
	}
	else
	{
		head_1 = first, head_2 = head;
		while (head_1->next != NULL) head_1 = head_1->next;
		while (head_2->next != NULL) head_2 = head_2->next;
		if (head_1 == head_2)
		{
			head_1 = first, head_2 = head;
			int len1 = Length(head_1), len2 = Length(head_2);
			if (len1 < len2) swap(head_1, head_2);
			for (int i = 0; i < abs(len1 - len2); i++) head_1 = head_1->next;
			while (head_1 != head_2)
			{
				head_1 = head_1->next;
				head_2 = head_2->next;
			}
			cout << "�������ཻ���ཻ����ֵΪ��" << head_1->data << endl;
			return head_1;
		}
		else
		{
			cout << "�������ཻ" << endl;
			return NULL;
		}
	}
}
