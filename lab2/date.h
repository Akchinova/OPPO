#ifndef DATE_H
#define DATE_H

#include "iostream"


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

#endif // DATE_H
