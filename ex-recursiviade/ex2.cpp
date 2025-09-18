#include <iostream>

using namespace std;

int mdc(int maior, int menor)
{
    int temp;
    if (maior < menor)
    {
        temp = maior;
        maior = menor;
        menor = temp;
    }

    if (maior == menor)
    {
        return menor;
    }
    else
    {
        cout << maior << " - " << menor << " = " << maior - menor << endl;
        temp = menor;
        menor = maior - menor;
        maior = temp;

        return mdc(maior, menor);
    }
}

int main()
{
    system("chcp 65001");

    cout << "\n\n-- Calculadora M.D.C --\n"
         << endl;
    int maior, menor;

    cout << "Insira o primeiro valor: ";
    cin >> maior;

    cout << "Insira o segundo valor: ";
    cin >> menor;

    int resultado = mdc(maior, menor);

    cout << "\nO máximo divisor comum entre os valores " << maior << " e " << menor << " é " << resultado << endl;

    return 0;
}