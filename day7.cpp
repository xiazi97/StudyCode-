/*
���һ��01��������������λ�õ��ַ����ǲ�һ����,���Ǿͽ����01��Ϊ����01��������: "1","10101","0101010"���ǽ���01����
С��������һ��01��s,С�����ҳ�һ����������Ӵ�,��������Ӵ���һ������01����С����Ҫ����æ�������������Ӵ��ĳ����Ƕ��١�
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
            res = max(len,res);
        }
        else
            len = 1;
    }
    cout << res << endl;
    return 0;
}