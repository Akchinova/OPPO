#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "date.h"

using namespace std;


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

    while (false == ist.good()) {
        Product product = Product::from_stream(ist);


        products.push_back(product);
    }

    return 0;
}
