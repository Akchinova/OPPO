// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <stdexcept>
#include <string>
#include "date.h"
using namespace std;
void Date::write(std::ostream& out) const
{
    out << day << "." << month << "." << year;
}
Date Date::from_stream(std::istream& in)
{
    Date Data;
    string data;
    in >> data;
    int d = stoi(data.substr(0, 2));
    int m = stoi(data.substr(3, 5));
    int y = stoi(data.substr(6, 9));
    Data.Check(d, m, y);
    return(Data);
}
//����������� ������� ����
int Date::getD() {
    return day;
}
//����������� ������� ������
int Date::getM() {
    return month;
}
//����������� ������� ����
int Date::getY() {
    return year;
}
//����������� ������� ����
void Date::setD(int value) {
    day = value;
}
//����������� ������� ������
void Date::setM(int value) {
    month = value;
}
//����������� ������� ����
void Date::setY(int value) {
    year = value;
}
void Date::Check(int d, int m, int y) {
    if (d < 1 || d > 31) throw runtime_error("���� ������ �����������");
    if (m < 1 || m > 12) throw runtime_error("����� ������ �����������");
    if (y < 0 ) throw runtime_error("��� ������ �����������");
    day = d;
    month = m;
    year = y;
}