// choices.cpp -- choosing a template
#include <iostream>
template <typename T>
T lesser(T a, T b)
{
    std::cout << "function 1" << std::endl;
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    std::cout << "function 2" << std::endl;

    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main()
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;
    cout << lesser(x, y) << endl;
    cout << lesser<>(m, n) << endl; // <>指出编译器应选择模板函数
    cout << lesser<int>(x, y) << endl; // 这条语句要求进行显式实例化，将使用显式实例化得到的函数

    return 0;
}