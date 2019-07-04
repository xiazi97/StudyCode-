/*
链接：https://www.nowcoder.com/questionTerminal/b89b14a3b5a94e438b518311c5156366
来源：牛客网
给定一个长度不小于2的数组arr。 写一个函数调整arr，使arr中要么所有的偶数位上都是偶数，要么所有的奇数位上都是奇数上。 
要求：如果数组长度为N，时间复杂度请达到O(N)，额外空间复杂度请达到O(1),下标0,2,4,6...算作偶数位,下标1,3,5,7...算作奇数位，例如[1,2,3,4]调整为[2,1,4,3]即可
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