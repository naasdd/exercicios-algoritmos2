#include <iostream>

using namespace std;

// codigozinho besta só pra pegar a sintaxe e o básico de alocação dinâmica e vetores, nem é exercicio

int main()
{
    int *p1;
    int x = 5;
    int teste[50];

    p1 = &x;

    x = 1;


    // cout << "\np1 = " << p1 << endl;
    // cout << "\nX = " << &x << endl;
    cout << "\n&teste           = " << teste << endl;
    cout << "\n&teste[0]        = " << &teste[0] << endl;
    cout << "\n&teste[1]        = " << &teste[2] << endl;
    cout << "\nsizeof teste[0]  = " << sizeof(teste[0]) << endl;



    return 0;
}