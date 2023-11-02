#include <bits/stdc++.h>
using namespace std;
int main(){
while (1)
{
int a,b;
cin>>a>>b;
try
{
    if (b==0)
    {
        throw 1;
    }

cout<<"Result = "<<a/b<<endl;
    
} 
catch (...)
{
    cout<<"Cannot divided by Zero/One"<<endl;
}
    
}
    return 0;
 }
