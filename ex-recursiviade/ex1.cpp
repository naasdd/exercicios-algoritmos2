#include <iostream>

using namespace std;

int potencia(int base, int expoente, int resultado)
{
    if (expoente > 1)
    {
        resultado = resultado * base;
        resultado = return potencia(base, expoente - 1, resultado);
    }
    if (expoente == 1)
    {
        return resultado;
    }
    if (expoente == 0)
    {
        resultado = 1;
        return resultado;
    }
}

int main()
{
    cout << "-- Programa que eleva um numero em potência --\n\n";

    int base, expoente;
    cout << "Insira o valor da base: ";
    cin >> base;
    cout << "\n Insira o valor do expoente: ";
    cin >> expoente;

    int resultado = base;
    potencia(base, expoente, resultado);

    return 0;
}