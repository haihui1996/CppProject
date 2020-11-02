// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main(void)
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char desseert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize); // reads through newline
    cout << "Enter your favorite desseert:\n";
    cin.getline(desseert, ArSize); // reads through new
    cout << "I have some delicious " << desseert;
    cout << " for you, " << name << ".\n";
    return 0;
}