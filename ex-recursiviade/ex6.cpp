#include <iostream>

using namespace std;

int multiplicar(int valor1, int valor2, int soma)
{
    if (valor2 == 1)
    {
        return soma;
    }

    soma = soma + valor1;
    valor2 = valor2 - 1;

    return multiplicar(valor1, valor2, soma);
}

int main()
{
    cout << "-- Programa que multiplica 2 valores sem o operador * \n";

    int valor1, valor2;

    cout << "Valor1: ";
    cin >> valor1;
    cout << "Valor2: ";
    cin >> valor2;

    int resultado = multiplicar(valor1, valor2, valor1);
    cout << valor1 << " x " << valor2 << " = " << resultado << endl;

    return 0;
}