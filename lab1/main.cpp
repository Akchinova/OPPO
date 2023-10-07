#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Product {
    string data;
    string name;
    int k;
};

int main() {
    ifstream ist("in.txt");
    if (!ist.is_open()){
        cout<<"File not open";
        return 0;
    }

    vector<Product> products;

    while (false == ist.eof()) {
        Product product;
        ist >> product.data >> product.name >> product.k;

        products.push_back(product);
    }

    for (size_t i = 0; i < products.size(); ++i) {
        cout << products[i].data << " " << products[i].name << " " << products[i].k << endl;
    }
}
