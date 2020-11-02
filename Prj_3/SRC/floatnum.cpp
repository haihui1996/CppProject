#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point;
    float tub = 10.0 / 3.0;                           // good to about 6 places
    double mint = 10.0 / 3.0;                         // good to about 15 places
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ", \nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a milion mints = ";
    cout << million * mint << endl;
    return 0;
}

/**
 * 从输出结果可以看到，放大后一百万倍后float和double的精确度是不一致的
 * tub = 3.333333, a million tubs = 3333333.250000, 
 * and ten million tubs = 33333332.000000
 * mint = 3.333333 and a milion mints = 3333333.333333
*/