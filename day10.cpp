/*
������������������x��k,���Ƕ���repeat(x, k)Ϊ��x�ظ�дk���γɵ���,����repeat(1234, 3) = 123412341234,repeat(20,2) = 2020.
ţţ���ڸ���4������x1, k1, x2, k2, ����v1 = (x1, k1), v2 = (x2, k2),�������Ƚ�v1��v2�Ĵ�С��
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x1, x2;
	int k1, k2;
	cin >> x1 >> k1 >> x2 >> k2;
	string v1 = x1;
	string v2 = x2;
	for (int i = 0; i<k1 - 1; ++i)
		v1.append(x1);
	for (int i = 0; i<k2 - 1; ++i)
		v2.append(x2);

	if (v1.size() > v2.size())
		cout << "Greater" << endl;
	else if (v1.size() < v2.size())
		cout << "Less" << endl;
	else
	{
		if (v1 > v2)
			cout << "Greater" << endl;
		else if (v1 == v2)
			cout << "Equal" << endl;
		else
			cout << "Less" << endl;
	}
	return 0;
}