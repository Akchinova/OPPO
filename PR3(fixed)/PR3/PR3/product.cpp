#include "product.h"

//����������� ������� ����
Date product::getDT() {
    return data;
}
//����������� ������� ������
string product::getN() {
    return name;
}
//����������� ������� ����
int product::getA() {
    return amount;
}
//����������� ������� ����
void product::setDT(Date value) {
    data = value;
}
//����������� ������� ������
void product::setN(string n) {
    name = n;
}
//����������� ������� ����
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
}//�������� ������ �������� � ������� � ��� ����� � ������ �������������.
void product::check_a() {
    if (amount <= 0) throw runtime_error("���������� ������� �����������.");
}
void product::check_n() {
    if (name.length()==0)throw runtime_error("�������� ������� �����������.");
}