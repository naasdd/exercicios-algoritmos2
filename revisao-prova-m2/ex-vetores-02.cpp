#include <iostream>

using namespace std;

// O usuario vai colocando uns valores
// Depois, o sistema separa pares e impares em dois vetores

void exibirVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << ", ";
    }
}

int main()
{
    cout << "\n-- Inicio do Programa --\n\n";

    int userInput;
    cout << "Insira um valor: ";
    cin >> userInput;

    int tamanho = 1;
    int *userArray = new int[tamanho];
    userArray[0] = userInput;

    while (userInput > 0)
    {
        cout << "Insira um valor: ";
        cin >> userInput;
        if (userInput == 0)
            break;
        tamanho += 1;

        int *temp = userArray;
        userArray = new int[tamanho];

        for (int i = 0; i < tamanho; i++)
        {
            if (i == tamanho - 1)
            {
                userArray[i] = userInput;
            }
            else
            {
                userArray[i] = temp[i];
            }
        }

        delete[] temp;
    };

    cout << "Array geral = [";
    exibirVetor(userArray, tamanho);
    cout << "]" << endl;

    int qtdPares = 0;
    int qtdImpares = 0;
    int *arrayPares = new int;
    int *arrayImpares = new int;

    for (int i = 0; i < tamanho; i++)
    {

        if (userArray[i] % 2 == 0)
        {
            qtdPares += 1;
            int *temp = arrayPares;
            arrayPares = new int[qtdPares];

            arrayPares[qtdPares - 1] = userArray[i];

            if (qtdPares > 1)
            {
                for (int j = 0; j < qtdPares - 1; j++)
                {
                    arrayPares[j] = temp[j];
                }
            }

            delete[] temp;
        }

        else if (userArray[i] % 2 == 1)
        {
            qtdImpares += 1;
            int *temp = arrayImpares;
            arrayImpares = new int[qtdImpares];

            arrayImpares[qtdImpares - 1] = userArray[i];

            if (qtdImpares > 1)
            {
                for (int j = 0; j < qtdImpares - 1
                    ; j++)
                {
                    arrayImpares[j] = temp[j];
                }
            }

            delete[] temp;
        }
    }

    cout << endl;

    cout << "Array pares = [";
    exibirVetor(arrayPares, qtdPares);
    cout << "]" << endl;

    cout << "Array impares = [";
    exibirVetor(arrayImpares, qtdImpares);
    cout << "]" << endl;

    // cout << "\nchegou ate aqui" << endl;
    return 0;
}