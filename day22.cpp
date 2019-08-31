/*
编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前

给定一个链表的头指针 ListNode* pHead，请返回重新排列后的链表的头指针。注意：分割以后保持原来的数据顺序不变。
*/


class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		// write code here
		if (pHead == nullptr)
			return nullptr;
		ListNode* cur = new ListNode(-1);
		ListNode* ret = new ListNode(-1);
		ListNode *p1 = cur, *p2 = ret, *node = pHead;
		while (node)
		{
			if (node->val < x)
			{
				p1->next = node;
				p1 = node;
			}
			else
			{
				p2->next = node;
				p2 = node;
			}
			node = node->next;
		}
		p2->next = nullptr;
		p1->next = ret->next;
		return cur->next;
	}
};