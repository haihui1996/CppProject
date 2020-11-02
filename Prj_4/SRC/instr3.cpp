#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.get(name, ArSize).get(); // read string newline
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert, ArSize).get(); // read string newline
    cout << "I have some delicious " << dessert
         << " for you, " << name << ".\n";
    return 0;
}