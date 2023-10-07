#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Date {
    int day;
    int month;
    int year;

    void write(std::ostream& out)
    {
        out << day << "." << month << "." << year;
    }

    static Date from_stream(std::istream& in)
    {
        Date result;
        in >> result.day;
        in.get();
        in >> result.month;
        in.get();
        in >> result.year;

        return result;
    }

};


struct Product {
    Date data;
    string name;

    static Product from_stream(std::istream& in)
    {
        Product result;
       in>> result.name;
        result.data = Date::from_stream(in);


       return result;
    }


    void write(std::ostream&out){
        data.write(out);
        out << name << endl;
    }

};



int main() {
    ifstream ist("in.txt");
    if (!ist.is_open()){
        cout<<"File not open";
        return 0;
    }

    vector<Product> products;
    Product k;

    while (false == ist.eof()) {
        Product product = Product::from_stream(ist);


        products.push_back(product);
    }

    return 0;
}
