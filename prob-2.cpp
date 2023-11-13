#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        char letter;
        cout << "Enter an uppercase letter: ";
        cin >> letter;
        if (!isalpha(letter) || !isupper(letter)) {
            throw 1;
        }
        cout << "You entered: " << letter << endl;
    } catch (...) {
        cout<< "You enter small letter or number"<< endl;
    }

    return 0;
}