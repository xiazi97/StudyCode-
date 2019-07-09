#if 0
/*
从用户输入的字符串中找到重复次数最多的字符，并输出字符和重复次数
*/
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	while (cin >> str) {
		int count = 0,res=0;
		char maxC;
		sort(str.begin(),str.end());      //对字符串进行排序
		for (size_t i = 0; i < str.length(); ++i) {
			if (str[i] == str[i + 1]) {
				count++;
			}
			else {								
				if (count > res) {
					res = count;
					maxC = str[i];			//此时str[i]是相等字符串的最后一个
				}
				count = 1;					//置1，以便重新循环
			}
		}
		cout << maxC << " "<<res << endl;
	}
	return 0;
}
#endif
