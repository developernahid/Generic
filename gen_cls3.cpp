#include <iostream>
using namespace std;
template <class N>
class Nahid{
    private:
    N a,b;
    public:
    Nahid(N x,N y){
        a=x;
        b=y;
    }
    void area(){
        cout<<"Area ="<<a*b<<endl;
    }
};
int main(){
    Nahid <int> ob(3, 3);
    Nahid <double> ob1(3.3, 3.9);
    ob.area();
    ob1.area();
}