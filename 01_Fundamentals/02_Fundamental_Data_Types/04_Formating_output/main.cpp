#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left << setw(10) << "Spring" << setw(10) << "Nice" << endl;
    cout << setw(10) << "Summer" << setw(10) << "Hot" << endl;
    cout << fixed << setprecision(10) << 12.34567 << endl
         << 22.123456;

    return 0;
}