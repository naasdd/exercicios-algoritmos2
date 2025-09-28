#include <iostream>

using namespace std;

// codigozinho besta só pra pegar a sintaxe e o básico de alocação dinâmica e vetores, nem é exercicio
// objetivo é fazer um array que varia de tamanho dinâmicamente

int main()
{
    int TAM = 5;

    int *p1 = new int[TAM];

    for (int i = 0; i < TAM; i++)
    {
        p1[i] = i;
        cout << "p1[i] = " << p1[i] << endl;
    }
    cout << "p1 = " << p1 << endl;

    int *temp = p1;

    cout << "temp = " << temp << endl;

    // aqui era pra eu prosseguir a fazer um novo array maior, mas pelo
    // visto é bem complicado de fazer assim em c++
    
    return 0;
}