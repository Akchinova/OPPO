#ifndef DATE_H
#define DATE_H

#include "iostream"


struct Date {
    int day;
    int month;
    int year;

    void write(std::ostream& out);
    static Date from_stream(std::istream& in);
};

#endif // DATE_H
