/*
��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ

����һ�������ͷָ�� ListNode* pHead���뷵���������к�������ͷָ�롣ע�⣺�ָ��Ժ󱣳�ԭ��������˳�򲻱䡣
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