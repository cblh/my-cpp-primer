#ifndef CH02_EX2_42_H_
#define CH02_EX2_42_H_

#include <string>
#include <iostream>

using std::cout;
using std::endl;

struct Sales_data
{
    std::string bookNo;
    //售出数量
    unsigned units_sold = 0;
    //收入
    double revenue = 0;

    void CalcRevenue(double price);

    double CalcAveragePrice();

    void SetData(Sales_data data);

    void AddData(Sales_data data);

    void Print();
};

void Sales_data::CalcRevenue(double price) {
    revenue = units_sold * price;
}

double Sales_data::CalcAveragePrice() {
    if (units_sold != 0) {
        return revenue / units_sold;
    } else {
        return 0.0;
    }
}

void Sales_data::SetData(Sales_data data) {
    bookNo = data.bookNo;
    units_sold = data.units_sold;
    revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data) {
    if (bookNo != data.bookNo) {
        return;
    }
    units_sold += data.units_sold;
    revenue += data.revenue;
}

void Sales_data::Print() {

    cout << "bookNo: " << bookNo << " revenue: " << revenue << " units_sold: " << units_sold;
    double averagePrice = CalcAveragePrice();
    if (averagePrice != 0.0) {
        cout << averagePrice << endl;
    } else {
        cout << "no soles" << endl;
    }
}

#endif