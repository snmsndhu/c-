#include <iostream>

using namespace std;

int main()
{
    int temp = 100;
    if (temp < 60)
    {
        cout << "Cold" << endl;
        cout << "Wear jacket";
    }
    else if (temp < 90)
    {
        cout << "Nice";
    }
    else
        cout << "Hot";
    return 0;
}