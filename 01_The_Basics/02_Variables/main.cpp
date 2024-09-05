#include <iostream>

int main()
{
    int file_size = 100;
    double sales = 9.99;
    int a = 1;
    int b = 2;
    int c = a;
    a = b;
    b = c;
    std::cout << b;
    return 0;
}