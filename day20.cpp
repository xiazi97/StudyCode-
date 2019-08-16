/*
逆波兰表达式

循环输入，获取逆波兰表达式，然后进行以下补助，直到测试完所有的测试用例：
	1. 遇到数字字符串，将该数字字符串转化为数字然后入栈。
	2. 遇到操作符时，从栈顶取两个数字，然后进行该运算符所对应运算，完成好将结果入栈，注意：先取到
	   的数字为运算符的右操作数。
	3. 继续1和2，直到处理完所有的字符串，最终栈顶元素即为所要结果。
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
            if(v[i][0] >= '0' && v[i][0] <= '9')  //是数字，入栈		v[i]是string类型，v[i][0]是char类型
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