#ifndef PRODUCT_H
#define PRODUCT_H
#include "iostream"
#include "date.h"
using namespace std;

struct product {
private:
    Date data;
    string name;
    int amount;
public:
    product() {
    }
    product(Date d, string n, int a) {
        data = d;
        name = n;
        amount = a;
    }
    Date getDT();
    string getN();
    int getA();
    void setDT(Date d);
    void setN(string N);
    void setA(int a);
    void write(std::ostream& out) const;
    static product from_stream(std::istream& in);
    void check_a();
    void check_n();
};



#endif // PRODUCT_H
