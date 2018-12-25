#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using std::string;

class Person {
friend std::istream &read(std::istream&, Person&);
friend std::ostream &print(std::ostream&, const Person&);
public:

    Person() = default;
    Person(const string &sname, const string &saddr): name(sname), address(saddr){ }
    explicit Person(std::istream &is){ read(is, *this); }

    auto getName() const -> string const& { return name; }
    auto getAddress() const -> string const& { return address; }
private:
    string name;
    string address;
};


#endif // PERSON_H
