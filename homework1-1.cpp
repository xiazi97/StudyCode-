#if 0
/*
���û�������ַ������ҵ��ظ����������ַ���������ַ����ظ�����
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
		sort(str.begin(),str.end());      //���ַ�����������
		for (size_t i = 0; i < str.length(); ++i) {
			if (str[i] == str[i + 1]) {
				count++;
			}
			else {								
				if (count > res) {
					res = count;
					maxC = str[i];			//��ʱstr[i]������ַ��������һ��
				}
				count = 1;					//��1���Ա�����ѭ��
			}
		}
		cout << maxC << " "<<res << endl;
	}
	return 0;
}
#endif
