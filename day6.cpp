/*
二货小易有一个W*H的网格盒子，网格的行编号为0~H-1，网格的列编号为0~W-1。每个格子至多可以放一块蛋糕，任意两块蛋糕的欧几里得距离不能等于2。
对于两个格子坐标(x1,y1),(x2,y2)的欧几里得距离为:
( (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2) ) 的算术平方根
小易想知道最多可以放多少块蛋糕在网格盒子里
*/


// 直接暴力计算，默认所有蛋糕的位置标记成1,不能放的地方标记成0
// 举个例子，就可以找出规律，是以4为周期重复出现的
// 1 1 0 0 1 1
// 1 1 0 0 1 1
// 0 0 1 1 0 0
// 0 0 1 1 0 0

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int w,h,res = 0;
	cin >> w >> h;
	vector<vector<int>> a;
	a.resize(w);
	for(auto& e : a)
		e.resize(h, 1);
	for(int i=0;i<w;i++)
	{
		for(int j=0;j<h;j++)
		{
			if(a[i][j]==1)
			{
				res++;
				if((i+2)<w)
					a[i+2][j] = 0;
				if((j+2)<h)
					a[i][j+2] = 0;
			}
		}
	}
	cout << res;
	return 0;
}