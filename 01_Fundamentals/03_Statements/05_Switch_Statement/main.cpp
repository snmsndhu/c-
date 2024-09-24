#include <iostream>

using namespace std;

int main()
{
    cout << "1- Create Account" << endl
         << "2- Change Password" << endl
         << "3- Quit" << endl
         << "Select an option" << endl;

    short input;
    cin >> input;

    switch (input)
    {
    case 1:
        cout << "You Selected 1";
        break;

    case 2:
        cout << "You Selected 2";
        break;

    default:
        cout << "Goodbye";
    }
    return 0;
}