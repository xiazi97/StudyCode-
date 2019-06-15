/*
如果一个01串任意两个相邻位置的字符都是不一样的,我们就叫这个01串为交错01串。例如: "1","10101","0101010"都是交错01串。
小易现在有一个01串s,小易想找出一个最长的连续子串,并且这个子串是一个交错01串。小易需要你帮帮忙求出最长的这样的子串的长度是多少。
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = 1;
    int res = 0;
    for(int i=1;i<str.size();++i)
    {
        if(str[i-1] != str[i])
        {
            len++;
            res = max(len,res);    //比较后更新最大值
        }
        else
            len = 1;
    }
    cout << res << endl;
    return 0;
}
