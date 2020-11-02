#include <iostream>
#include "stock10.h"

int main()
{
    {
        using std::cout;
        
        Stock stock1 ("NanoSmart",12,20.0);
        stock1.show();

        Stock stock2;   // 使用默认构造函数
        stock2.show();

        const Stock land = Stock("Hello world");
        land.show();
    }

    return 0;
}