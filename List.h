#pragma once
//enum bool{ false, true };
#include<iostream>
#include<stdlib.h>
using namespace std;

//template<typename T>
//class LinearList
//{
//public:
//	//	LinearList();//构造函数
//	//	~LinearList();//析构函数
//	virtual int Size()const = 0;//求表最大体积
////	virtual int Length()const = 0;//求表长度
//	virtual int Search(T& x)const = 0;//在表中搜索给定值x
////	virtual int Locate(int i)const = 0;//在表中定位第i个元素的位置
//	virtual bool getData(int i, T& x)const = 0;//取第i个表项的值
////	virtual void setData(int i,T&x) = 0;//修改第i个表项的值为x
//	virtual bool Insert(T& y, T& x) = 0;//在元素y后插入x
//	virtual bool InsertF(T& y, T& x) = 0;//在元素y前插入x
//	virtual bool InsertM(T& y, T& x) = 0;//在多个元素y后插入x
//	virtual bool InsertMF(T& y, T& x) = 0;
//	virtual bool Insert_(int i, T& x) = 0;//在第i个表项后面插入x
//	virtual bool Delete(T& x) = 0;//删除元素x
//	virtual	bool Delete(int i, T& x) = 0;//删除第i个表项，通过x返回
//	virtual bool IsEmpty()const = 0;//判表空
//	virtual bool IsFull()const = 0;//判表满
////	virtual void Sort() = 0;//排序
//	virtual void Input() = 0;//输入
//	virtual void Output() = 0;//输出
////	virtual LinearList<T>operator=(LinearList<T>&L) = 0;//复制？
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
//	T *data;//存放数据
//	int maxSize;//最大容纳项数
//	int last;//当前存放表项的最后位置(从0开始)
//	//	void reSize(int newSize);//改变data数组空间大小，暂不需要
//public:
//	SeqList(int sz = Csize);
//	//	SeqList(const SeqList<T>&L);//复制构造函数
//	~SeqList() { delete[]data; };
//	int Size()const { return maxSize; }//表最大容纳个数
////	int Length()const{ return last++; }//表当前长度
//	int Search(T& x)const;//搜索x在表中位置,返回数组下标
//	bool getData(int i, T& x)const;//取第i个表项的值
//	bool Insert(T& y, T& x);//在值为y的节点后插入x
//	bool InsertF(T& y, T& x);//在值为y的节点前插入x
//	bool InsertM(T& y, T& x);//在多个值为y的节点后插入x
//	bool InsertMF(T& y, T& x);//在多个值为y的节点前插入x
//	bool Insert_(int i, T& x);
//	bool Delete(T& x);//删除值为x的节点
//	bool Delete(int i, T& x);//删除第i个表项，通过x返回
//	bool IsFull()const { return(last == maxSize - 1) ? true : false; }//判表空否
//	bool IsEmpty()const { return(last == -1) ? true : false; }//判表满否
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
//			cerr << "内存分配错误！" << endl;
//			exit(1);//非正常运行导致退出程序
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
//		return true;//数据获取成功
//	}
//	else return false;//数据获取失败
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
//			cout << "插入成功" << endl;
//			return true;
//		}
//	}
//	cout << "未查找到元素：" << y << endl;
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
//			cout << "插入成功" << endl;
//			return true;
//		}
//	}
//	cout << "未查找到元素：" << y << endl;
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
//	cout << "插入成功" << endl;
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
//	cout << "删除成功！" << endl;
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
//	cout << "删除成功！" << endl;
//	return true;
//}
//
//template<typename T>
//void SeqList<T>::Input()
//{
//	cout << "开始建立顺序表，请输入表中元素个数(从0开始计数)：";
//	cin >> last;
//	cout << "开始输入" << endl;
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
//	cout << "顺序表当前元素最后位置为" << last << endl;
//	for (int i = 0; i <= last; i++)
//		cout << "#" << i + 1 << ":" << data[i] << '\t';
//}

template <typename T>
struct Link_Node
{
	T data;
	Link_Node<T>* next;
	Link_Node(Link_Node<T>* ptr = NULL) { next = ptr; } //初始化指针的构造函数
	Link_Node(const T& item, Link_Node<T>* ptr = NULL) //初始化数据和指针的构造函数，用于创建新节点
	{
		data = item;
		next = ptr;
	}
};

template <typename T>
class Link_List
	// public LinearList<T>
{
	Link_Node<T>* first; //定义链表头指针
	Link_Node<T>* f; //定义双头链表头指针
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
	Link_Node<T>* Locate(int i); //搜索第i个元素的位置
	Link_Node<T>* Locate(Link_Node<T>* head, int i);
	Link_Node<T>* Search(T& x); //定位值为x的节点的位置
	Link_Node<T>* getHead() { return first; }
	Link_Node<T>* makeCircle(T& m, T& n);
	Link_Node<T>* checkLoop(Link_Node<T>* first);
	Link_Node<T>* recoverLoop(Link_Node<T>* first, Link_Node<T>* head, T& m, T& n);
	Link_Node<T>* checkCross(Link_Node<T>* first, Link_Node<T>* head);

	int Length(Link_Node<T>* first);
	bool getData(int i, T& x);
	bool Insert(T& y, T& x); //元素y后插入x
	bool InsertF(T& y, T& x); //元素y前插入x
	bool InsertM(T& y, T& x); //多个元素y后插入x
	bool InsertMF(T& y, T& x);
	bool Insert_(int i, T& x);
	bool Delete(T& x);
	bool Reverse();
	bool ReverseList();
	bool Delete(int i, T& x); //删除第i个表项，通过x返回
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
	Link_Node<T>* p = first; //p指向头结点；
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
	Link_Node<T>* p = first; //p指向头结点；
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
	Link_Node<T>* p = first; //p指向头结点；
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
	Link_Node<T>* p = first; //p指向头结点；
	while (len)
	{
		if (p->next->data == x)
		{
			Link_Node<T>* del = p->next;
			p->next = del->next; //删除指定位置的节点
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
	cout << "请输入元素,并以-1结尾:" << endl;
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
	cout << "创建成功" << endl;
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
	while (head_1->data != m) head_1 = head_1->next; //找到m,n节点所在位置
	while (head_2->data != n) head_2 = head_2->next;
	if (head_1 == NULL || head_2 == NULL)
	{
		cout << "节点输入错误" << endl;
		return NULL;
	}
	if (!judgePlace(m, n)) swap(head_1, head_2);
	if (head_2->next == NULL)
	{
		//此时仍为单链表
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
	cout << "连接成功" << endl;
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
		cout << "存在环" << endl;
		cout << "位置为:" << fast->data << "\t" << tmp->data << endl;
	}
	return fast;
}

template <typename T>
inline Link_Node<T>* Link_List<T>::recoverLoop(Link_Node<T>* first, Link_Node<T>* head, T& m, T& n)
{
	if (first == NULL || head == NULL)
	{
		cout << "输入节点为空" << endl;
		return NULL;
	}
	else
	{
		Link_Node<T> *head_1 = first, *tmp = head, *node;
		if (!judgePlace(m, n)) swap(m, n);
		while (head_1->data != n) head_1 = head_1->next;
		head_1->next = NULL;
		cout << "链表恢复成功" << endl;
		cout << "源链表：";
		Output(first);
		cout << endl;
		cout << "新链表：";
		Output(head);
		cout << endl;
		cout << "输出链表中间节点的值" << endl;
		cout << "1.源头节点" << endl;
		cout << "2.新头节点" << endl;
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
			cout << "中间两节点的值为：" << node->data << "\t";
			cout << Locate(tmp, len / 2 + 1)->data << endl;
			return node;
		}
		else
		{
			node = Locate(tmp, len / 2 + 1);
			cout << "中间节点的值为：" << node->data << endl;
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
		cout << "两链表相交，相交处的值为：" << head_1->data << endl;
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
			cout << "两链表相交，相交处的值为：" << head_1->data << endl;
			return head_1;
		}
		else
		{
			cout << "两链表不相交" << endl;
			return NULL;
		}
	}
}
