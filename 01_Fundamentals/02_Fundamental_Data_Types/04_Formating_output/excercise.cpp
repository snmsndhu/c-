#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
         << setw(15) << "C++" << setw(10) << 100 << endl
         << setw(15) << "JavaScript" << setw(10) << 50 << endl;
    return 0;
}