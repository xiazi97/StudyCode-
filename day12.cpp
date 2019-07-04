/*
���ӣ�https://www.nowcoder.com/questionTerminal/b89b14a3b5a94e438b518311c5156366
��Դ��ţ����
����һ�����Ȳ�С��2������arr�� дһ����������arr��ʹarr��Ҫô���е�ż��λ�϶���ż����Ҫô���е�����λ�϶��������ϡ� 
Ҫ��������鳤��ΪN��ʱ�临�Ӷ���ﵽO(N)������ռ临�Ӷ���ﵽO(1),�±�0,2,4,6...����ż��λ,�±�1,3,5,7...��������λ������[1,2,3,4]����Ϊ[2,1,4,3]����
*/

#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int>& arr, int len) {
	int odd, even;
	odd = 1;
	even = 0;
	while (even < len && odd < len) {
		if (arr[even] % 2 == 0) {
			even = even + 2;
		}
		if (arr[odd] % 2 == 1) {
			odd = odd + 2;
		}
		if (even < len && odd < len) {
			if (arr[even] % 2 == 1 && arr[odd] % 2 == 0) {
				int temp = arr[even];
				arr[even] = arr[odd];
				arr[odd] = temp;
			}
		}
	}
}

int main()
{
	vector<int> a = {7,7,9,5,1,6,7,9,3,2,6};
	solution(a, 11);
	return 0;
}