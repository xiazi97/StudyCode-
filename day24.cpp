/*
ÅĞ¶Ï¶ş²æÊ÷ÊÇ·ñÆ½ºâ
*/
#include <iostream>
#include <algorithm>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(nullptr), right(nullptr) {
	}
};

class Balance {
public:
	int Height(TreeNode* proot)
	{
		if (nullptr == proot)
			return 0;

		int left = Height(proot->left);
		int right = Height(proot->right);
		return left > right ? left + 1 : right + 1;
	}

	bool isBalance(TreeNode* root) {
		if (nullptr == root)
			return true;
		int left = Height(root->left);
		int right = Height(root->right);
		if (abs(left - right) > 1)
			return false;
		return isBalance(root->left) && isBalance(root->right);
	}
};