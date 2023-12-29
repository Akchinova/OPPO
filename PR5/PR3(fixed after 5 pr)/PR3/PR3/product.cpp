// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#pragma once
#include "product.h"

//Определение геттера даты
Date product::getDT() {
    return data;
}
//Определение геттера месяца
string product::getN() {
    return name;
}
//Определение геттера года
int product::getA() {
    return amount;
}
//Определение сеттера даты
void product::setDT(Date value) {
    data = value;
}
//Определение сеттера месяца
void product::setN(string n) {
    name = move(n);
}
//Определение сеттера года
void product::setA(int value) {
    amount = value;
}
void product::write(std::ostream&out) const
{
    data.write(out);
    out << " " << name << " " << amount << endl;
}
product product::from_stream(std::istream& in)
{
   product result;
   result.data = Date::from_stream(in);
   in >> result.name;
   in >> result.amount;
   return result;
}//написать методы проверки в классах и уже потом в тестах компилировать.
void product::check_a() {
    if (amount <= 0) throw runtime_error("Количество введено неправильно.");
}
void product::check_n() {
    if (name.length()==0)throw runtime_error("Название введено неправильно.");
}