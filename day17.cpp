/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/

class Solution {
public:
	int jumpFloorII(int number) {
		//动态规划问题
		//f(n) = f(n-1) + f(n-2) + ... + 1
		//f(n-1) = f(n-2) + f(n-3) + ...+1
		//f(n)-f(n-1)  => f(n) = 2 * f(n-1)
		if (number < 0)
			return 0;
		else
			return 1 << (number - 1);
	}
};