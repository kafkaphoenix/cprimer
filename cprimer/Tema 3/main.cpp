#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
using std::vector;

using std::string;
using std::cout; using std::cin; using std::endl; using std::cerr;
using std::begin; using std::end;

bool compare(int const* pb1, int const* pe1, int const* pb2, int const* pe2)
{
    if((pe1 - pb1) != (pe2 - pb2))
        return false;
    else
    {
        for(auto i = pb1, j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
            if (*i != *j) return false;
    }

    return true;
}

int main()
{
//    string str("Hello world");
//
//    for(auto &c : str)
//        c = 'x';
//    cout << str << endl;

//    vector<unsigned> scores(11, 0);
//    unsigned grade;
//    while (cin >> grade) {
//        if (grade <= 100)
//            ++*(scores.begin() + grade / 10);
//    }
//
//    for (auto v : scores)
//        cout << v << " ";
//
//    cout << endl;

//    string s("some string");
//    if (s.begin() != s.end())
//    {
//        auto it = s.begin();
//        *it = toupper(*it);
//    }
//
//    for (auto v : s)
//        cout << v;

//binary search

//    vector<int> numbers = {1,2,3,4,5,6};
//    int sought = 5;
//
//    auto beg = numbers.cbegin(), end = numbers.cend();
//    auto mid = beg + (end - beg)/2;
//
//    while (mid != end && *mid != sought)
//    {
//        if(sought < *mid)
//            end = mid;
//        else
//            beg = mid + 1;
//        mid = beg + (end- beg)/2;
//    }
//
//    cout << *mid;

//    constexpr size_t array_size = 10;
//    int ia[array_size];
//    for(size_t idx = 0; idx < array_size; ++idx)
//        ia[idx] = idx;
//
//    for(int *b = ia; b != &ia[array_size]; ++b)
//        cout << *b << " ";
//
//    for(auto const& i : ia)
//        cout << i << " ";
//    cout << endl;
//
//    vector<int> iv(10);
//    for(vector<int>::size_type idx = 0; idx != iv.size(); ++idx)
//        iv[idx] = idx;
//
//    for(auto const& i : iv)
//        cout << i << " ";
//
//    for(auto ptr = ia; ptr != ia + array_size; ++ptr)
//        *ptr = 0;
//    for(auto const& i : ia)
//        cout << i << " ";
//    cout << endl;

     int arr1[3] = { 0, 1, 2 };
    int arr2[3] = { 0, 2, 4 };

    if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
        cout << "The two arrays are equal." << endl;
    else
        cout << "The two arrays are not equal." << endl;

    cout << "==========" << endl;

    vector<int> vec1 = { 0, 1, 2 };
    vector<int> vec2 = { 0, 1, 2 };

    if (vec1 == vec2)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;

    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> v(begin(arr), end(arr));

    for (auto i : v) cout << i << " ";
    cout << endl;

    return 0;
}
