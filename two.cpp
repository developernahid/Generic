#include <iostream>
#include <string>
using namespace std;
class Password {
public:
    string password;
    Password(const string& pw) :password(pw) {}

    bool operator==(const Password& other) const {
        // check if passwords match
        return this->password == other.password;
    }
};

int main() {
    Password password1("bubt");
    Password password2("bubt");

    if (password1 == password2) {
        cout << "Password cracked" << endl;
    } else {
        cout << "Wrong" << endl;
    }

    return 0;
}
