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
//ќпределение геттера даты
int Date::getD() {
    return day;
}
//ќпределение геттера мес€ца
int Date::getM() {
    return month;
}
//ќпределение геттера года
int Date::getY() {
    return year;
}
//ќпределение сеттера даты
void Date::setD(int value) {
    day = value;
}
//ќпределение сеттера мес€ца
void Date::setM(int value) {
    month = value;
}
//ќпределение сеттера года
void Date::setY(int value) {
    year = value;
}
void Date::Check(int d, int m, int y) {
    if (d < 1 || d > 31) throw runtime_error("ƒень введен неправильно");
    if (m < 1 || m > 12) throw runtime_error("ћес€ц введен неправильно");
    if (y < 0 ) throw runtime_error("√од введен неправильно");
    day = d;
    month = m;
    year = y;
}