#ifndef STOCK00_H
#define STOCK00_H
#include <string>
class Stocks
{
private:    /* 类成员，私有 */
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:     /*类方法，公共 */
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif // !STOCK00_H
