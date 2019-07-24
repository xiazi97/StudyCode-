/*链接：https://www.nowcoder.com/questionTerminal/2b7995aa4f7949d99674d975489cb7da
来源：牛客网

Given a triangle, find the minimum path sum from top to bottom.Each step you may move to adjacent numbers on the row below.

For example, given the following triangle

[
	[2],
	[3, 4],
	[6, 5, 7],
	[4, 1, 8, 3]
]

The minimum path sum from top to bottom is11(i.e., 2 + 3 + 5 + 1 = 11).

Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.
*/


class Solution {
public:
	int minimumTotal(vector<vector<int> > &triangle) {
		//f[0][0] = a[0][0];
		vector<vector<int>> f(triangle); //拷贝构造一个和triangle相同的二维数组
		for (int i = 1; i<triangle.size(); ++i) {
			for (int j = 0; j <= i; ++j) {
				if (j == 0)
					f[i][j] = f[i - 1][j] + triangle[i][j];
				else if (i == j)
					f[i][j] = f[i - 1][j - 1] + triangle[i][j];
				else
					f[i][j] = min(f[i - 1][j - 1], f[i - 1][j]) + triangle[i][j];
			}
		}
		int minSum = f[triangle.size() - 1][0];
		for (int i = 1; i<triangle.size(); ++i)
			minSum = min(minSum, f[triangle.size() - 1][i]);
		return minSum;
	}
};