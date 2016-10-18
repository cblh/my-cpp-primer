#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        int cnt = 1;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                cnt++;
            } else {
                cout << total << " occurs " << cnt << " times " << endl;
                total = trans;
                cnt = 1;
            }
        }
        cout << cnt << endl;
    } else {
        cout << "No data" << endl;
    }
    return 0;
}
