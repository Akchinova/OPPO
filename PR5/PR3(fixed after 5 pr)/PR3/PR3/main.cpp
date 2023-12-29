// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#ifdef _DEBUG
#define new new ( ＿NORMAL_BLOCK , ＿FILE＿ , ＿LINE＿)
#endif
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "date.h"
#include "product.h"

using namespace std;

vector<product> read_products(std::istream& in)
{
    vector<product> products;
    //product k;

    while (!in.eof()) {
        product product = product::from_stream(in);
        products.push_back(product);
        if (!in.good())
            break;
    }
    return products;
}

void write_products(std::ostream& out, const vector<product>& products)
{
    for (size_t i = 0; i < products.size(); ++i) {
        products[i].write(out);
    }
}

int main() {
    ifstream ist("in.txt");
    {
        if (!ist.is_open()) {
            cout << "File not open";
            return 0;
        }

        vector<product> products = read_products(ist);

        write_products(std::cout, products);
    }
    _CrtDumpMemoryLeaks();
    return 0;
}
