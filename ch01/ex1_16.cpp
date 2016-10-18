#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int val = 0, sum = 0;
    while (cin >> val) {
        sum += val;
    }
    cout << "Sum is" << sum << endl;
    return 0;
}
