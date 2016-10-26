#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str1;
    string str2;
    if (cin >> str1 && cin >> str2) {
        auto len1 = str1.size();
        auto len2 = str2.size();
        if (len1 == len2) {
            cout << "The two string have the same length" << endl;
        } else {
            cout << "The longer string is " << (len1 > len2 ? str1 : str2) << endl;
        }
    } else {
        cout << "no enough data" << endl;
    }
    return 0;
}
