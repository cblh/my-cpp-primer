#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string big;
    string chunk;
    while (cin >> chunk) {
        big += chunk;
    }
    cout << "The concatenated string is " << big << endl;
    return 0;
}
