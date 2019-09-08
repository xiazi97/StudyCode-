#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		int inlen = vin.size();
		if (inlen == 0)
			return NULL;

		vector<int> left_pre, right_pre, left_in, right_in;
		TreeNode *head = new TreeNode(pre[0]);
		int len = 0;
		for (int i = 0; i<inlen; ++i) {
			if (vin[i] == pre[0])
			{
				len = i;
				break;
			}
		}
		for (int i = 0; i<len; ++i) {
			left_in.push_back(vin[i]);
			left_pre.push_back(pre[i + 1]);
		}
		for (int i = len + 1; i<inlen; ++i)
		{
			right_in.push_back(vin[i]);
			right_pre.push_back(pre[i]);
		}
		head->left = reConstructBinaryTree(left_pre, left_in);
		head->right = reConstructBinaryTree(right_pre, right_in);
		return head;
	}
};