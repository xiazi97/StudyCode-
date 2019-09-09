#include <iostream>
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};

class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead == NULL || k == 0)
			return NULL;
		ListNode* first = pListHead;
		ListNode* second = pListHead;
		for (int i = 1; i<k; ++i) {
			if (first->next != NULL)
				first = first->next;
			else
				return NULL;
		}
		while (first->next != NULL) {
			first = first->next;
			second = second->next;
		}
		return second;
	}
};