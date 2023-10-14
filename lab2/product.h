#ifndef PRODUCT_H
#define PRODUCT_H
#include "iostream"
#include "date.h"
using namespace std;

struct product {
    Date data;
    string name;
    int amount;

    void write(std::ostream&out);
    static product from_stream(std::istream& in);
};



#endif // PRODUCT_H
