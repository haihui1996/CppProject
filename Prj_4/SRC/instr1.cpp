// instr1.cpp -- reading more than one string
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
// 运行结果：
// Enter your name:
// haihui deng
// Enter your favorite dessert:
// I have some delicious deng for you, haihui.
// "haihui deng"中间的空格导致运行与期望相悖
