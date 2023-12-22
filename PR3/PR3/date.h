#ifndef DATE_H
#define DATE_H

#include "iostream"


struct Date {

    int day = 0,month = 0,year = 0;

    void write(std::ostream& out) const;
    static Date from_stream(std::istream& in);
};

#endif // DATE_H
