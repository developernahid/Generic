#include <bits/stdc++.h>
using namespace std;
int main() {
    try {
        int num;
        cout << "Enter an integer: ";
        if (!(cin >> num)) {
            throw runtime_error("Invalid input. Please enter an integer.");
        }
        cout << "You entered: " << num << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: "<< endl;
    }

    return 0;
}
