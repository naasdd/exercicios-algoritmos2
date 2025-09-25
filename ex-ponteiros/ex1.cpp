#include <iostream>

using namespace std;

// codigozinho besta só pra pegar a sintaxe e o básico de ponteiros, nem é exercicio

int main()
{
    int *p1;
    int x = 5;
    int teste;

    p1 = &x;

    x = 1;


    cout << "\np1 = " << p1 << endl;
    cout << "\nX = " << &x << endl;
    cout << "\nteste  = " << &teste << endl;

    return 0;
}