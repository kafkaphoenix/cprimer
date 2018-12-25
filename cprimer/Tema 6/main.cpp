#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

#include <initializer_list>
using std::initializer_list;

#include <num.h>
#include <Chapter6.h>

#include <vector>

void error_msg(initializer_list<string> il)
{
    for (const auto &elem : il)
        cout << elem << " " ;
    cout << endl;
}

int (*f4(int))(int*, int);

int funca(int a, int b);

int add(int a, int b) { return a + b; };
int substract(int a, int b) { return a - b; };
int multiply(int a, int b) { return a * b; };
int divide(int a, int b) { return b != 0 ? a / b : 0; };

int main(int argc, char **argv)
{
    string str;

    //funciones que devuelven punteros a arrays
using arr = int[10];
arr *fun1(int i);

auto fun2(int i) -> int (*)[10];

string arrS[10];
decltype(arrS) *fun3(int i);

string (*fun4(int i))[10];

//funciones que devuelven punteros a funciones

using PF = int(*)(int*,int);
PF f1(int);

decltype(error_msg) *f2(int);

auto f3(int) -> int (*)(int*,int);

    for(int i = 0; i != argc; ++i)
    {
        cout << string(argv[i]) + " ";
    }

    int a = 4, b = 5;
    swapi(a,b);
    cout << a << " " << b << " " << fact(10);

    error_msg({"function", "okay"});

    using PFu = int(*)(int,int);
    std::vector<PFu> vfunca;

    vfunca.push_back(add);

    std::vector<decltype(funca) *> vec {add, substract, multiply, divide};

    for (auto f : vec)
    {
        cout << f(2,2) << std::endl;
    }

    return 0;
}
