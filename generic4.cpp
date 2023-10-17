#include <bits/stdc++.h>
using namespace std;
template <typename M>
void divison(M n){
M a,b,c,div;
cout<<"Enter 3 Number: ";
cin>>a>>b>>c;
div=(a+b+c)/n;
cout<<"DIV= "<<div<<endl;
}
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
divison<int>(n);
return 0;
}
