#include "date.h"

void Date::write(std::ostream& out) const
{
    out << day << "." << month << "." << year;
}

Date Date::from_stream(std::istream& in)
{
    Date result;
    in >> result.day;
    in.get();
    in >> result.month;
    in.get();
    in >> result.year;

    return result;
}
