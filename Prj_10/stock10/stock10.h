#ifndef STOCK10_H
#define STOCK10_H
#include <string>
class Stock
{
private:    /* 类成员，私有 */
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:     /*类方法，公共 */
    Stock();    // 默认构造函数
    Stock(const std::string & co, long n = 0, double pr = 0.0); // 构造函数
    ~Stock();   // 析构函数
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;      // const成员函数
};
#endif // !STOCK10_H