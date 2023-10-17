#include <bits/stdc++.h>
using namespace std;
template <typename N>
N Replace_Arr(N d[5]){
N ar[5];
N sum=0;
for(int i=0; i<5; i++){
ar[i]=d[i];
sum=sum+ar[i];
}
return sum;
}
int main(){
//For Integar value test
int n[5];
cout<<"Enter 5 int value:";
for(int i=0; i<5; i++){
cin>>n[i]; }
int res = Replace_Arr(n);
cout<<res<<endl;
//For Integar value test--Ata extra bujhar jonno je double dile hoy kina.. Voy paiyen na
double m[5];
cout<<"Enter 5 double value:";
for(int i=0; i<5; i++){
cin>>m[i]; }
double res1 = Replace_Arr(m);
cout<<res1<<endl;
}
