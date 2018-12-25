#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <array>
#include <vector>
using std::vector;
#include <list>
using std::list;
#include <deque>
using std::deque;
#include <forward_list>
using std::forward_list;
#include <typeinfo>
#include <regex>
#include "Fecha.h"

void find_and_insert(forward_list<string> &list, const string& to_find
                     , const string& to_add)
{
    auto prev = list.before_begin();
    for(auto curr=list.begin(); curr != list.end(); prev = curr++)
    {
        if (*curr == to_find)
        {
            list.insert_after(curr, to_add);
            return;
        }
    }
    list.insert_after(prev, to_add);
}

 void remove_evens_and_double_odds(forward_list<int>& data)
{
    for(auto cur = data.begin(), prv = data.before_begin(); cur != data.end();){
        if (*cur & 0x1)
            cur = data.insert_after(prv, *cur),
            advance(cur, 2),
            advance(prv, 2);
        else
            cur = data.erase_after(prv);
            for (auto i : data) cout << i << " ";
            cout << endl;
    }
}

void etiq(const string &oldVal, string &s, const string &newVal)
{
    for(auto cur = s.begin(); cur != s.end() - oldVal.size(); )
        if(oldVal == string{cur, cur + oldVal.size()})
        {
            cur = s.erase(cur, cur + oldVal.size());
            cur = s.insert(cur, newVal.begin(), newVal.end());
            cur += newVal.size();
        }
        else
            ++cur;
}

void etiq2(const string &oldVal, string &s, const string &newVal)
{
    for(size_t pos = 0; pos != s.size() - oldVal.size(); )
        if(s[pos] == oldVal[0] && s.substr(pos, oldVal.size()) == oldVal)
        {
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        else
            ++pos;
}

int main()
{
//    std::array<string, 3> a = {"hola","que","tal"};
//
//    vector <string> v1;
//    vector <string> v2(10);
//    vector <string> v3(10,"hola");
//    vector <string> v4 = {"hey"};
//    vector <string> v5{"hey","yey"};
//    vector <int> v6(10);
//    std::cout << "sigues vivo" << std::endl;
//    v3 = v5;
//    std::cout << v3.size();
//
//    list <int> li{ 1, 2, 3, 4, 5 };
//    vector <int> vec2{ 1, 2, 3, 4, 5 };
//
//
//    std::cout << (vector<int>(li.begin(), li.end())== vec2 ? "true" : "false");
//list<string> slist = {"quasi", "simba", "frollo", "scar"};
//vector<string> v = {"quasi", "simba", "frollo", "scar"};
//    // insert the last two elements of v at the beginning of slist
//
//slist.insert(slist.end(), {});
//for(auto a:slist)
//    std::cout << a;
//
//// run-time error: iterators denoting the range to copy from
//// must not refer to the same container as the one we are changing
//slist.insert(slist.begin(), slist.begin(), slist.end());
//
//    list<int> lista{1,2,3,4,5,6,7,8,9,10};
//    deque<int> even, odd;
//    for(auto a : lista)
//        (a & 0x1 ? odd : even).push_back(a);
//    for(auto e : even)
//        cout << e;
//    cout << endl;
//    for(auto o:odd)
//        cout << o;


//    forward_list <string>listilla{"hola","ravioli","manoli"};
//    find_and_insert(listilla, "ravioli", "adiós");
//    for(auto s : listilla)
//        cout << s;

//    forward_list<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    remove_evens_and_double_odds(data);
//    for (auto i : data) cout << i << " ";
//
//
//    vector<char> vecti{'a','b','c','d'};
//    string s(vecti.begin(),vecti.end());
//    cout << s;
//
//    string sa{ "To drive straight thru is a foolish, tho courageous act." };
//    etiq2("tho", sa, "though");
//    etiq2("thru", sa, "through");
//    cout << sa << endl;
//
//    string name{"Javier"};
//    name.append(" III");
//    name.insert(0,"Sr.");

//    string::size_type pos = 0;
//    string n{"0,1,2,3,4,5,6,7,8,9"};
//    string a{"abcdefghijklmnñopqrstuwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ"};
//    string s2{a};
//    for (auto & c: s2) c = toupper(c);
//    a+=s2;

//    string an{"ab2c3d7R4E6"};
//    while ((pos = an.find_first_of(a, pos))!= string::npos)
//    {
//        cout << "found letter at index: " << pos << " element is " << an.at(pos) << endl;
//        ++pos;
//    }
//    pos = 0;
//     while ((pos = an.find_first_not_of(a, pos))!= string::npos)
//    {
//        cout << "found number at index: " << pos << " element is " << an.at(pos) << endl;
//        ++pos;
//    }
//    int sum = 0;
//    vector<string>svec{"42", "67", "87", "36"};
//    for(auto const& v : svec)
//    {
//        sum+=stoi(v);
//    }
//    cout << sum;

    unsigned d = 1, m = 2, y = 2017;
    string s{"12 Jan 2018"};
    string s1{"12/02/2018"};
    Fecha date(d,m,y);
    date.print();
    Fecha date1(s);
    Fecha date2(s1);
    date1.print();
    date2.print();

    stack<

    return 0;
}
