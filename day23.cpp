/*
有两个用链表表示的整数，每个结点包含一个数位。这些数位是反向存放的，也就是个位排在链表的首部。编写函数对这两个整数求和，并用链表形式返回结果。

给定两个链表ListNode* A，ListNode* B，请返回A+B的结果(ListNode*)。
*/

struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(nullptr) {}
};
class Plus {
public:
	static ListNode* plusAB(ListNode* a, ListNode* b) {
		ListNode *cur = a;
		ListNode *ret = b;
		ListNode *head = new ListNode(-1);
		ListNode *p = head;
		int mod = 0,sum,x,y;
		while (cur != nullptr || ret!=nullptr || mod != 0)
		{
			x = (cur == nullptr? 0 : cur->val);
			y = (ret == nullptr? 0 : ret->val);
			sum = x + y + mod;

			mod = sum / 10;
			p->next = new ListNode(sum%10);
			p = p->next;

			cur = (cur == nullptr? nullptr : cur->next);
			ret = (ret ==nullptr ? nullptr : ret->next);
		}
		return head->next;
	}
};

void main()
{
	ListNode a(1),b(2),c(3);
	b.next = &c;
	a.next = &b;
	
	ListNode k(3), n(2), m(1);
	n.next = &m;
	k.next = &n;
	Plus::plusAB(&a,&k);

}