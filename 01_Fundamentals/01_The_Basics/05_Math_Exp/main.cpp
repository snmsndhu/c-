#include <iostream>

int main()
{
    int x = 10;
    int y = 3;
    int z = x - y;
    int k = x++; // In this case first it will asign the value of x to k then it will incress it.
    int s = ++x; // In this case first it will increase the value of x then it will assign it to s.
    std::cout << z;
    return 0;
}