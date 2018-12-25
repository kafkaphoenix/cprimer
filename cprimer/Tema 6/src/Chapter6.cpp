#include <cstddef>
using std::size_t;

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl; using std::cin;

#include "Chapter6.h"

unsigned long long fact(const int &i)
{
    return i > 1 ? i *fact( i - 1 ) : 1;
}

int abs (int i)
{
    return i >= 0 ? i : -i;
}

size_t counter()
{
    static size_t ctr = 0;
    return ctr++;
}

void interactive_fact()
{
    string const prompt = "Enter a number >=0\n";
    string const error_prompt = "Invalid number";
    for(int i; cout << prompt, cin >> i;)
    {
        if (i < 0)
        {
            cout << error_prompt << endl;
            continue;
        }
        cout << fact(i) << endl;
    }
}

void swapi(int &x, int &y)
{
    int temp = x;
    x  = y;
    y = temp;
}
