// assign.cpp -- type changes on initialization
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;    // int converted to float
    int guess(3.9832); // double converted to int
    int debet =  7.2E12;    // result not defined in C++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debet = " << debet << endl;
    return 0;
}

