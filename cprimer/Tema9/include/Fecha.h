#ifndef FECHA_H
#define FECHA_H

#include <string>
using std::string;
#include <iostream>
using std::cout;

class Fecha
{
    public:
        Fecha(unsigned d, unsigned m, unsigned y): day{d}, month{m}, year{y} {}
        Fecha(string s);
        void print()
        {
            cout << "day:" << day << " " << "month: " << month << " " << "year: " << year;
        }

    private:
        unsigned day;
        unsigned month;
        unsigned year;
};

#endif // FECHA_H
