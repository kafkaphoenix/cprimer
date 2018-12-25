#include <iostream>
using std::istream; using std::cout; using std::cin; using std::cerr;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector; using std::string; using std::cin; using std::istringstream;
#include <fstream>
#include <sstream>

#include "../Tema 2/include/Sales_data.h"

struct PersonInfo {
string name;
vector<string> phones;
};

void leer_archivo(const std::string& filename, vector<string>& vec)
{
    std::ifstream ifs(filename);
    if(ifs)
    {
        string buf;
        while(std::getline(ifs, buf))
            vec.push_back(buf);
    }
}

const istream& leer(istream& in)
{
    string buf;
    while(in >> buf)
    {
        std::cout << buf << std::endl;
    }
    in.clear();

    return in;
}

int main()
{
//    vector<string> vec;
//    leer_archivo("data/book.txt", vec);
//    for (const auto &str : vec)
//    std::cout << str << std::endl;
//    //leer(std::cin);
//
//
//    std::ifstream input("data/book.txt");
//
//    Sales_data total;
//    if (read(input, total))
//    {
//        Sales_data trans;
//        while (read(input, trans))
//        {
//            if (total.isbn() == trans.isbn())
//                total.combine(trans);
//            else
//            {
//                print(cout, total) << endl;
//                total = trans;
//            }
//        }
//        std::ofstream output("data/booksafe.txt", std::ofstream::app);
//        print(output, total) << endl;
//
//    }
//    else
//    {
//        cerr << "No data?!" << endl;
//    }

    std::string line, word;
    vector<PersonInfo> people;

    while (getline(cin, line))
    {
        PersonInfo info;
        std::istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    for (auto &p : people)
    {
        std::cout << p.name << " ";
        for (auto &s : p.phones)
            std::cout << s << " ";
        std::cout << std::endl;
    }

    return 0;
}
