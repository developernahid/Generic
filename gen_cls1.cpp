#include <bits/stdc++.h>
using namespace std;
template <class T>
class N{
 public:
 int a;
 N(T m){
 a=m;
 }
 T sum(){
 //cout<<a;
 return a;
 }
};
int main(){
N<int>ob(6);
N<float>ob1(6.6);
cout<<ob.sum()<<endl;
cout<<ob1.sum()<<endl;
}
