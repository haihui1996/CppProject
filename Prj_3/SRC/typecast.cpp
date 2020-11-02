// typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
    using namespace std;
    int auks, baks, coots;

    auks = 19.99 + 11.99;

    // the following statement adds the values as double,
    // then converts the results to int.
    baks = (int)19.99 + (int)11.99;  // old C syntax
    coots = int(19.99) + int(11.99); // new C++ syntax
    cout << "auks = " << auks << ", baks = " << baks
         << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is "; // print as char
    cout << int(ch) << endl;                 // print as int
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl; // using static_cast
    return 0;
}