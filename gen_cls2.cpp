#include <bits/stdc++.h>
using namespace std;
class Test{
public:
int a,b;
Test(){
cin>>a >>b;
}
void add(){
cout<<(a+b);
}
};
template <class T>
void show(T ob){
ob.add();
}

int main(){
Test ob;
show(ob);
return 0;
}
