#include <iostream>

using namespace std;

int main()
{
    cout << "\n-- Inicio do Programa --\n\n";

    int *p1;
    int *p2;
    int v = 3;

    cout << "\n\nTeste a)" << endl;
    cout << "v = " << v << endl;


    p2 = &v;
    p1 = new int;

    cout << "\n\nTeste b)" << endl;
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;


    *p1 = 42;

    cout << "\n\nTeste c)" << endl;
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;


    int *p3;

    cout << "\n\nTeste d)" << endl;
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;


    p3 = &v;

    cout << "\n\nTeste e)" << endl;
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;


    v = 88;

    cout << "\n\nTeste f)" << endl;
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;

    
    p1 = &v;

    cout << "\n\nTeste g)" << endl;
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    cout << "v = " << v << endl;

    return 0;
}