#include <iostream>
#include "./ex2_42.h"

using std::cin;
using std::cout;
using std::endl;
using namespace std;

int main() {
    Sales_data total;
    double price1;
    if (cin >> total.bookNo >> total.units_sold >> price1) {
        total.CalcRevenue(price1);
        Sales_data trans;
        while (cin >> trans.bookNo >> total.units_sold >> price1) {
            trans.CalcRevenue(price1);
            if (total.bookNo == trans.bookNo) {
                total.revenue += trans.revenue;
            } else {
                total.Print();
                total = trans;
            }
        }
        total.Print();
    } else {
        cerr << "no data" << endl;
        return -1;
    }
    return 0;
}
