#include <iostream>

using namespace std;

// codigozinho besta só pra pegar a sintaxe e o básico de alocação dinâmica e vetores, nem é exercicio
// objetivo é fazer um array que varia de tamanho dinâmicamente

int main()
{
    int *array = new int;

    *array = 1;

    for (int i = 0; i < 5; i++)
    {
        
        
        array = (int *)malloc(sizeof(array) + 1
        *array[i] = i;
        cout << "\nArray[i] = " << array[i] << endl;
    }

    cout << *array << endl;

    return 0;
}