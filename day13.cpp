/*
链接：https://www.nowcoder.com/questionTerminal/3a3577b9d3294fb7845b96a9cd2e099c
来源：牛客网

小Q正在给一条长度为n的道路设计路灯安置方案。

为了让问题更简单,小Q把道路视为n个方格,需要照亮的地方用'.'表示, 不需要照亮的障碍物格子用'X'表示。

小Q现在要在道路上设置一些路灯, 对于安置在pos位置的路灯, 这盏路灯可以照亮pos - 1, pos, pos + 1这三个位置。

小Q希望能安置尽量少的路灯照亮所有'.'区域, 希望你能帮他计算一下最少需要多少盏路灯。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cur;
	cin >> cur;
	for (int i = 0; i<cur; ++i) {
		int num;
		string str;
		cin >> num;
		cin >> str;
		int res = 0;
		for (int i = 0; i<num;) {
			if (str[i] == '.') {
				i += 3;		//当前.附近的三个都可照亮
				res++;
			}
			else
				i++;            //如果不是.就跳过
		}
		cout << res << endl;
	}
	return 0;
}
