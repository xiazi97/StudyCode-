/*
如果一个整数只能被1和自己整除,就称这个数是素数。
如果一个数正着反着都是一样,就称为这个数是回文数。例如:6, 66, 606, 6666
如果一个数字既是素数也是回文数,就称这个数是回文素数
牛牛现在给定一个区间[L, R],希望你能求出在这个区间内有多少个回文素数。
*/

#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int x)
{
	if (x == 1)
		return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

bool IsRevrse(int x)
{
	int m = x;       //n的值赋给m
	int sum = 0;
	while (m) {          //将m倒置，即n的倒置，存在sum中
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	if (sum == x)     //判断sum（倒置后的n）和n是否相等
		return true;
	return false;
}

int main()
{
	int l, r;
	int res = 0;
	cin >> l >> r;
	for (int i = l; i <= r; ++i) {
		if (IsPrime(i) && IsRevrse(i))
			res++;
	}
	cout << res << endl;
	return 0;
}