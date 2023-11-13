#include <bits/stdc++.h>
using namespace std;
class Sum {
private:
    int value;

public:
    Sum() : value(0) {}

    Sum(int val) : value(val) {}

    int getValue(){
        return value;
        
    }
    friend Sum operator+(Sum& obj1, Sum& obj2);
};

Sum operator+(Sum& obj1, Sum& obj2) {
    Sum result;
    result.value = obj1.value + obj2.value;
    return result;
}

int main() {
    Sum obj1(5);
    Sum obj2(10);
    Sum result = obj1 + obj2;
    cout << "Result of addition: " << result.getValue() << std::endl;
    return 0;
}
