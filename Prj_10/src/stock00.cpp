#include <iostream>
#include "stock00.h"

void Stocks::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative;"
                  << company << " shares set to 0." << std::endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stocks::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares can't be negative;"
                  << "Transaction is aborted" << std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stocks::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares can't be negative;"
             << "Transaction is aborted" << std::endl;
    }
    else if (num > shares)
    {
        cout << "you can't sell more than you have!" << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stocks::update(double price)
{
    share_val = price;
    set_tot();
}

void Stocks::show()
{
    std::cout << "Company: " << company << " Shears: " << shares << std::endl
              << " Shares price: $" << share_val << " Total worth: " << total_val << std::endl;
}