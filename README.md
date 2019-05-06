# About_LinkList
一些关于链表的常用操作

链表是最基本的数据结构，面试官也常常用链表来考察面试者的基本能力，而且链表相关的操作相对而言比较简单，也适合考察写代码的能力。链表的操作也离不开指针，指针又很容易导致出错。综合多方面的原因，链表题目在面试中占据着很重要的地位。本文对链表相关的面试题做了较为全面的整理，希望能对找工作的同学有所帮助。

链表结点声明如下：<br />
struct ListNode<br />
{ <br />
>>int m_nKey; <br />
>>ListNode * m_pNext; <br />
}; 


## 题目列表
1. 求单链表中结点的个数<br />
2. 将单链表反转<br />
3. 查找单链表中的倒数第K个结点（k > 0） <br />
4. 查找单链表的中间结点<br />
5. 从尾到头打印单链表<br />
6. 已知两个单链表pHead1 和pHead2 各自有序，把它们合并成一个链表依然有序<br />
7. 判断一个单链表中是否有环<br />
8. 判断两个单链表是否相交<br />
9. 求两个单链表相交的第一个节点<br />
10. 已知一个单链表中存在环，求进入环中的第一个节点<br />
11. 给出一单链表头指针pHead和一节点指针pToBeDeleted，O(1)时间复杂度删除节点pToBeDeleted<br />
