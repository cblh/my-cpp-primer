// Print each number in the range specified by two integers.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void print_range(int lo, int hi) {
    if (lo > hi) {
        return print_range(hi, lo);
    }
    for (int i = lo; i <= hi; i++) {
        cout << i << " ";
    }
}

int main() {
    cout << "Enter two numbers:\n" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    print_range(v1, v2);
    return 0;
}
