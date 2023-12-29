#pragma once
#ifndef DATE_H
#define DATE_H

#include "iostream"


struct Date {
private:
    int day = 0, month = 0, year = 0;
public:
    Date() = default;
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    int getD();
    int getM();
    int getY();
    void setD(int d);
    void setM(int m);
    void setY(int y);
    void write(std::ostream& out) const;
    static Date from_stream(std::istream& in);
    void Check(int d, int m, int y);
};

#endif // DATE_H
