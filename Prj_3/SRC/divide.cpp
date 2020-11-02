// divide.cpp -- integer and floating-point division
#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating point division: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed constants: 1e7/9.0 = " << 1.e7 / 9.0 << endl;

    // 有些基于ANSI C之前的编译器的C++实现不支持浮点常量的f后缀，
    // 可以用(float)1.e7/(float)9.0代替
    cout << "float constants: 1e7f/9.0 = " << 1.e7f / 9.0f << endl;
    return 0;
}