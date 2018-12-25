#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>
using std::find;
#include <list>
using std::list;

int main()
{
    list<string> lst{"hola pepe tomas y san juan"};
    string val = "tomas";

    auto result = find(lst.cbegin(), lst.cend(), val);

    cout << "The value " << val
        << (result == lst.cend() ? " is not present" : " is present") << endl;
    return 0;
}
