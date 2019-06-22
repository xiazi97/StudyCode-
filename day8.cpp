/*
���һ������ֻ�ܱ�1���Լ�����,�ͳ��������������
���һ�������ŷ��Ŷ���һ��,�ͳ�Ϊ������ǻ�����������:6, 66, 606, 6666
���һ�����ּ�������Ҳ�ǻ�����,�ͳ�������ǻ�������
ţţ���ڸ���һ������[L, R],ϣ���������������������ж��ٸ�����������
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
	int m = x;       //n��ֵ����m
	int sum = 0;
	while (m) {          //��m���ã���n�ĵ��ã�����sum��
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	if (sum == x)     //�ж�sum�����ú��n����n�Ƿ����
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