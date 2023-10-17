#include <bits/stdc++.h>
using namespace std;l;
template <typename N>
N check_greater(N a, N b, N c){
  if(a>b && a>c)
  return a;
  else if(b>c && b>a)
  return b;
  else
  return c;
}
int main(){
int a,b,c;
cout<<"Enter 3 number: ";
cin>>a >>b >>c;
cout<<"Biggest number of them: ";
cout<<check_greater<int>(a,b,c);
return  0;
}

