#include <bits/stdc++.h>
using namespace std;
template <class N, class O, class P>
class A
{
public:
    N a;
    O c;
    P  b;
    A()
    {
        cout<<"Enter number oparetor number(10-5): ";
        cin>>a>>c>>b;
        if (c=='+')
        {
            cout<<a+b<<endl;
        }
        else if (c=='-')
        {
            cout<<a-b<<endl;
        }
        else if (c=='*')
        {
            cout<<a*b<<endl;
        }
        else if (c=='/')
        {
            cout<<a/b<<endl;
        }
        else if (c=='%')
        {
            cout<<a%b<<endl;
        }
        else
        {
            cout<<"Enter correct oparetor!"<<endl;
        }
    }
};
int main()
{
    while (1)
    {
        A<int,char,int>ob;
    }
}
