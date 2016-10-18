#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Sales_item book1;
    Sales_item book2;
    if (cin >> book1) {
        if (cin >> book2) {
            if (book1.isbn() == book2.isbn()) {
                cout << book1 + book2 << endl;
                return 0;
            } else {
                cout << "Data must be refer to same ISBN" << endl;
                return -1;
            }
        } else {
            return 2;
        }
    } else {
        cout << "No data?!" << endl;
        return -1;
    }
    return 0;
}
