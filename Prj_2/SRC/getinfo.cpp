// getinfo.cpp -- get input and output
#include <iostream>

int main()
{
    using namespace std;
    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Hear are tow more. ";
    carrots += 2;

    // the next line concatnates output;
    cout << "Now you have " << carrots << " carrots." << endl;

    // the same as
    cout << "Now you have "
         << carrots
         << " carrots."
         << endl;
    return 0;
}