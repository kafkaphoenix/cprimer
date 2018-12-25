#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    int cnt = 1;

    std::cin >> item1;

    while(std::cin >> item2)
    {
        if (item1.isbn() == item2.isbn())
        {
            item1 += item2;
            ++cnt;
        }
        else
        {
            std::cout << item1 << " transactions: " << cnt << std::endl;
            item1 = item2;
            cnt = 1;
        }
    }
       std::cout << item1 << " transactions: " << cnt << std::endl;

    return 0;
}
