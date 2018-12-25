#include <iostream>
#include <string>
#include <vector>
#include "../Tema 2/include/Sales_data.h"
#include "Screen.h"
#include "Window_mgr.h"

using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
//    Sales_data total(cin);
//    if (!total.isbn().empty()) {
//        std::istream &is = cin;
//        while (is){
//            Sales_data trans(is);
//            if (total.isbn() == trans.isbn())
//                total.combine(trans);
//            else {
//                print(cout, total) << endl;
//                total = trans;
//            }
//        }
//        print(cout, total) << endl;
//    }
//    else {
//        std::cerr << "No data?!" << endl;
//        return -1;
//    }

    Screen myScreen(80, 40, 'O');
    const Screen blank(5, 3, ' ');
    const Screen noBlank(5, 3, 'H');
    myScreen.set('#').display(cout);
    blank.display(cout);
    noBlank.display(cout);

    return 0;
}
