#include <iostream>
using namespace std;
class myClass {
public:
    int u;
    int v;

    myClass(int u_val, int v_val){
        u=u_val;
        v=v_val;
    }

    myClass operator--() {
        int idDigits = 143;
        u -= idDigits;
        v -= idDigits;
        return *this;
    }
};

int main() {
    myClass obj(2, 2);

    cout << "Original values: u = " << obj.u << ", v = " << obj.v << endl;

    --obj;
    cout << "After prefix decrement: u = " << obj.u << ", v = " << obj.v << endl;

    return 0;
}

