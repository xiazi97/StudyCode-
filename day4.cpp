/*
 字符串中找出最长字符串
 读入一个字符串str，输出字符串str中的连续最长的数字串
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,cur,res;
    cin >> str;
	for(int i=0;i<=str.length();i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            cur += str[i];
        }
        else
        {
            if(res.length() < cur.length())
                res = cur;
            else
                cur.clear();
        }
    }
    cout << res << endl;
    return 0;
}