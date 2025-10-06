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

    exibirVetor(userArray, tamanho);

    int qtdPares = 0;
    int qtdImpares = 0;
    int *arrayPares = nullptr;
    int *arrayImpares = nullptr;

    for (int i = 0; i < tamanho; i++)
    {
        if (userArray[i] % 2 == 0)
        {
            qtdPares += 1;
            int *temp = arrayPares;
            arrayPares = new int[qtdPares];
            for (int i = 0; i < qtdPares; i++)
            {
                cout << "\nchegou ate aqui" << endl;
                arrayPares[i] = temp[i];
            }
            arrayPares[qtdPares] = userArray[i];
            delete[] temp;
        }
        else if (userArray[i] % 2 == 1)
        {
            qtdImpares += 1;
            int *temp = arrayImpares;
            arrayImpares = new int[qtdImpares];
            for (int i = 0; i < qtdImpares; i++)
            {
                arrayImpares[i] = temp[i];
            }
            arrayImpares[qtdImpares] = userArray[i];
            delete[] temp;
        }
    }

    cout << endl;
    cout << endl;
    exibirVetor(arrayPares, tamanho);
    cout << endl;
    cout << endl;
    exibirVetor(arrayImpares, tamanho);

    return 0;
}