#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "date.h"
#include "product.h"

using namespace std;

int main() {
    ifstream ist("in.txt");
    if (!ist.is_open()){
        cout<<"File not open";
        return 0;
    }

    vector<product> products;
    product k;

    while (!ist.eof()) {
        product product = product::from_stream(ist);

        if (!ist.good())
            break;

        products.push_back(product);
    }

   for (int i = 0; i < products.size(); ++i) {
       products[i].write(std::cout);
   }



    return 0;
}
