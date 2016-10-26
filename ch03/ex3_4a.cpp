#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str1;
    string str2;
    if ((cin >> str1) && (cin >> str2)) {
        if (str1 == str2) {
            cout << "The two strings are equal." << endl;
        } else {
            cout << (str1 > str2 ? str1 : str2) << endl;
        }
    } else {
        cout << "no enough data" << endl;
    }
    return 0;
}
