#include <iostream>
using namespace std;
class Remainder {
private:
    int value;

public:
    Remainder(int val) : value(val) {}

    int getValue() {
        return value;
    }

    Remainder operator%(const Remainder& other) {
        int result = value % other.value;
        return Remainder(result);
    }
};

int main() {
    Remainder num1(9);
    Remainder num2(3);

    Remainder result = num1 % num2;

    cout << "The remainder of " << num1.getValue() << " divided by " << num2.getValue() << " is " << result.getValue() << endl;

    return 0;
}
