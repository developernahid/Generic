#include <iostream>
#include <string>
using namespace std;
class Palindrome {
public:
    int num;
    Palindrome() : num(0) {}

    void getInput() {
       cout << "Enter an integer: ";
       cin >> num;
    }

    bool isPalindrome() {
       string str =to_string(num);
        int len = str.length();
        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Palindrome pal;
    pal.getInput();
    if (pal.isPalindrome()) {
       cout << pal.num << " is a palindrome." <<endl;
    } else {
       cout << pal.num << " is not a palindrome." <<endl;
    }
    return 0;
}
