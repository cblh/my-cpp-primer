#include <iostream>
#include "./ex2_42.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Sales_data book;
    double price;
    cin >> book.bookNo >> book.units_sold >> price;
    book.CalcRevenue(price);
    book.Print();

    return 0;
}

