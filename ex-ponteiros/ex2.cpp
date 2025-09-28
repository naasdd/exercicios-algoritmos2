#include <iostream>

using namespace std;

// codigozinho besta só pra pegar a sintaxe e o básico de alocação dinâmica e vetores, nem é exercicio
// objetivo é fazer um array que varia de tamanho dinâmicamente

int main()
{
    int *p1 = new int[5];

    for (int i = 0; i < 5; i++)
    {
        p1[i] = i;
        cout << "p1[i] = " << p1[i] << endl;
    }
        cout << "p1 = " << p1 << endl;

    



    return 0;
}