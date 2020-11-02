// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    // cin >> year;    // cin读取了输入的数字后，会将'\n'留在输入队列中，导致下一个输入出错
    (cin >> year).get(); // 使用get()清除掉后面的'\n'
    cout << "What is its street address?\n";
    char address[100];
    cin.getline(address, 100);
    cout << "Year built: " << year << endl;
    cout << "Street address: " << address << endl;
    cout << "Done!\n";
    return 0;
}