#include <bits/stdc++.h>
using namespace std;
class Nahid
{
public:
    int x,y;
    Nahid(int a, int b)
    {
    x=a;
    y=b;
    }
    void sum(){
     cout<<"Sum= "<<x+y<<endl;
    }
};
template <class T>
    void show(T ob){
    ob.sum();
    }
int main()
{
 Nahid ob(5,5);
 Nahid ob1(5.5,5.1);
 show(ob);
 show(ob1);
}

