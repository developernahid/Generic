#include <bits/stdc++.h>
using namespace std;
template <class T>
class Nahid
{
private:
    T x,y;
public:
    Nahid(T a, T b)
    {
        x=a;
        y=b;
    }
    void sum()
    {
        cout<<"Sum= "<<x+y<<endl;
    }
};
int main()
{
    Nahid<int>ob(5,5);
    Nahid<double>ob1(5.5,5.1);
    Nahid<float>ob2(4.34,5.22);
    ob.sum();
    ob1.sum();
    ob2.sum();
}
