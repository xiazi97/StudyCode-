/*
���ӣ�https://www.nowcoder.com/questionTerminal/3a3577b9d3294fb7845b96a9cd2e099c
��Դ��ţ����

СQ���ڸ�һ������Ϊn�ĵ�·���·�ư��÷�����

Ϊ�����������,СQ�ѵ�·��Ϊn������,��Ҫ�����ĵط���'.'��ʾ, ����Ҫ�������ϰ��������'X'��ʾ��

СQ����Ҫ�ڵ�·������һЩ·��, ���ڰ�����posλ�õ�·��, ��յ·�ƿ�������pos - 1, pos, pos + 1������λ�á�

СQϣ���ܰ��þ����ٵ�·����������'.'����, ϣ�����ܰ�������һ��������Ҫ����յ·�ơ�
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
				i += 3;
				res++;
			}
			else
				i++;
		}
		cout << res << endl;
	}
	return 0;
}