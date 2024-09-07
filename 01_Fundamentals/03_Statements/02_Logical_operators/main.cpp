#include <iostream>

using namespace std;

int main()
{

    int age = 20;
    bool isEligible = age > 18 && age < 65;
    cout << boolalpha << isEligible;
    return 0;
}

// order of the logical operations

// ()
// !
// &&
// ||