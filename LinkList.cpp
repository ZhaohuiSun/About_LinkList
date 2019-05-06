#include<iostream>
#include<stack>
using namespace std;

struct ListNode
{
	int m_nKey;
	ListNode * m_pNext = NULL;      //C++11 新特性，结构体内直接赋初始值
};


//创建测试用链表
ListNode* CreatList(int n)
{
	ListNode* temp = NULL, *p = NULL, *pHead = NULL;
	for (int i = 0; i < n; i++)
	{
		temp = new ListNode;
		cin >> temp->m_nKey;
		if (i == 0)
		{
			pHead  = temp;
		}
		else
		{
			p->m_pNext = temp;
		}
		p = temp;
	}
	return pHead;
}

//查找链表中倒数第 k 个节点
ListNode* GetkthNode(ListNode* head, int k)
{
	if (head == NULL || k <= 0)
		return NULL;
	ListNode* fir = head;
	ListNode* sec = head;
	for (int i = 0; i < k; i++)
	{
		fir = fir->m_pNext;
	}
	while (fir != NULL)
	{
		sec = sec->m_pNext;
		fir = fir->m_pNext;
	}
	return sec;
}

ListNode* GetFirstCommonNode(ListNode* pHead1, ListNode* pHead2)
{
	if (pHead1 == NULL || pHead2 == NULL)
		return NULL;
	stack<ListNode*> s1, s2;
	for (ListNode* a = pHead1; a != NULL; a = a->m_pNext)
	{
		s1.push(a);
	}
	for (ListNode* b = pHead2; b != NULL; b = b->m_pNext)
	{
		s1.push(b);
	}

	if (s1.top() != s2.top())
		return NULL;
	ListNode* temp;
	while (s1.top() == s2.top())
	{
		temp = s1.top();
		s1.pop();
		s2.pop();
	}
	return temp;
}


int main()
{
	int num;
	cout << "创建链表，请输入节点数：";
	cin >> num;
	ListNode* pH = CreatList(num);
	
	for (ListNode* p = pH; p != NULL; p = p->m_pNext)
	{
		cout << p->m_nKey << endl;
	}              //输出测试用链表


	ListNode* rk = GetkthNode(pH, 5);
	cout << rk->m_nKey;


	system("pause");
}