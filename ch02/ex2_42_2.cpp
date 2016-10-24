#include <iostream>
#include "./ex2_42.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Sales_data book1;
    Sales_data book2;
    double price1;
    double price2;
    cin >> book1.bookNo >> book1.units_sold >> price1;
    cin >> book2.bookNo >> book2.units_sold >> price2;
    book1.CalcRevenue(price1);
    book1.Print();
    book2.CalcRevenue(price2);
    book2.Print();
    if (book1.bookNo != book2.bookNo) {
        cout << "no same bookNo" << endl;
    } else {
        book1.AddData(book2);
        book1.Print();
    }

    return 0;
}

