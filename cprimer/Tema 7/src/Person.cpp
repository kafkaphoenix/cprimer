#include "../include/Person.h"

#include <iostream>

std::istream &read(std::istream &is, Person &p)
{
    return is >> p.name >> p.address;
}

std::ostream &print(std::ostream &os, const Person &p)
{
    return os << p.name << " " << p.address;
}
