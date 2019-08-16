/*
�沨�����ʽ

ѭ�����룬��ȡ�沨�����ʽ��Ȼ��������²�����ֱ�����������еĲ���������
	1. ���������ַ��������������ַ���ת��Ϊ����Ȼ����ջ��
	2. ����������ʱ����ջ��ȡ�������֣�Ȼ����и����������Ӧ���㣬��ɺý������ջ��ע�⣺��ȡ��
	   ������Ϊ��������Ҳ�������
	3. ����1��2��ֱ�����������е��ַ���������ջ��Ԫ�ؼ�Ϊ��Ҫ�����
*/
#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    int cur,ret,res;
    while(cin>>n)
    {
        vector<string> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        stack<int> s;
        for(int i=0;i<n;++i){
            if(v[i][0] >= '0' && v[i][0] <= '9')  //�����֣���ջ		v[i]��string���ͣ�v[i][0]��char����
                s.push(atoi(v[i].data()));
            else
            {
                cur = s.top();
                s.pop();
                ret = s.top();
                s.pop();
                switch(v[i][0])
                { 
                    case '+': 
                        s.push(cur+ret);
                        break; 
                    case '-': 
                        s.push(ret-cur);
                        break; 
                    case '*': 
                        s.push(ret*cur);
                        break; 
                    case '/': 
                        s.push(ret/cur);
                        break; 
                }
            }
        }
        cout<<s.top()<<endl;
    }
    return 0;
}