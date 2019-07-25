/*
һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������
*/

class Solution {
public:
	int jumpFloorII(int number) {
		//��̬�滮����
		//f(n) = f(n-1) + f(n-2) + ... + 1
		//f(n-1) = f(n-2) + f(n-3) + ...+1
		//f(n)-f(n-1)  => f(n) = 2 * f(n-1)
		if (number < 0)
			return 0;
		else
			return 1 << (number - 1);
	}
};