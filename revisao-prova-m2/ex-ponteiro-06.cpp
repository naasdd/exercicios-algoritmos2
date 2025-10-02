#include <iostream>

using namespace std;

int main()
{
    cout << "\n-- Inicio do Programa --\n\n";

    int *p1;
    int *p2;
    int v = 3;

    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;

    cout << "\n\n";

    p2 = &v;
    p1 = new int;

    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;

    return 0;
}