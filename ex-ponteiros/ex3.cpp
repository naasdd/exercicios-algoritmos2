#include <iostream>

using namespace std;

int main()
{
    int *p1;
    int x = 5;

    p1 = &x;

    cout << "\np1 = " << *p1 << endl;
    cout << "\nX = " << x << endl;

    return 0;
}