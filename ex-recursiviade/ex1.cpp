#include <iostream>

using namespace std;

int potencia(int base, int expoente, int resultado)
{
    if (expoente < 0)
    {
        cout << "\nErro catastrófico\n";
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

    resultado = (base * potencia(base, expoente - 1, resultado));
    return resultado;
}

int main()
{
    cout << "-- Programa que eleva um numero em potência --\n\n";

    int base, expoente;
    cout << "Insira o valor da base: ";
    cin >> base;
    cout << "\nInsira o valor do expoente: ";
    cin >> expoente;

    int resultado = base;
    resultado = potencia(base, expoente, resultado);
    cout << "\nResultado: " << resultado << endl;

    return 0;
}