/*
对于任意两个正整数x和k,我们定义repeat(x, k)为将x重复写k次形成的数,例如repeat(1234, 3) = 123412341234,repeat(20,2) = 2020.
牛牛现在给出4个整数x1, k1, x2, k2, 其中v1 = (x1, k1), v2 = (x2, k2),请你来比较v1和v2的大小。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x1, x2; //定义为string，以便于后续append操作
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
