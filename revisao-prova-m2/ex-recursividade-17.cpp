#include <iostream>
#include <vector>

using namespace std;

std::vector<int> arrayBinario;

int divisao(int userInput)
{

    int resto = (userInput % 2);
    int dividido = (userInput / 2);

    cout << userInput << " / 2 = " << dividido << ", resto " << resto << endl;

    arrayBinario.push_back(resto);

    if (dividido == 0)
    {
        return resto;
    }
    else
    {
        return divisao(dividido);
    }
}

bool validarEntrada(int userInput)
{
    if (userInput < 0)
    {
        return false;
    }

    return true;
}
void displayFinal(int userInput)
{
    cout << "\nResultado: " << userInput << " = ";
    for (size_t i = 0; i < arrayBinario.size(); ++i)
    {
        cout << arrayBinario[i];
    }

    cout << endl;
}

int main()
{
    system("chcp 65001");
    cout << "\n-- Transformar número inteiro em binário --\n\n";

    int userInput;
    cout << "Digite um número inteiro positivo: ";
    cin >> userInput;

    if (validarEntrada(userInput))
    {
        divisao(userInput);
        displayFinal(userInput);
    }

    return 0;
}