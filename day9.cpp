/*
ţţ����ʦ������һ������Ķ���:����x �� y,[x, y]��ʾx��y֮��(����x��y)�����������������ϡ�����[3,3] = {3}, [4,7] = {4,5,6,7}.ţţ������һ������Ϊn�ĵ�������,ţţ��֪����Ҫ���ٸ����䲢��������������С�
����:
{1,2,3,4,5,6,7,8,9,10}����ֻ��Ҫ[1,10]��һ������
{1,3,5,6,7}����ֻ��Ҫ[1,1],[3,3],[5,7]����������
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, res = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i<n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i<n; ++i) {
		if (a[i] + 1 != a[i + 1])
			res++;
	}
	cout << res << endl;
	return 0;
}