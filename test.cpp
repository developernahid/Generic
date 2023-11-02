#include <bits/stdc++.h>
using namespace std;
class Complex {
private:
    int real;
    int imag;

public:

    Complex(){
    }
    Complex(int r, int i) : real(r), imag(i) {}

    friend Complex operator+(Complex&,Complex&);
};

// Define the friend function for operator overloading
Complex operator+(Complex& a,Complex& b) {
    Complex c3;
    c3.real= a.real+b.real;
    c3.imag= a.imag+b.imag;
    return c3;
}

int main() {
    Complex c1(2, 3);
    Complex c2(1, 2);
    Complex c3;
    c3= c1 + c2;
    cout<<c3.real<<" "<<c3.imag;
    return 0;
}
