#include <iostream>

using namespace std;

struct Data
{
    int dia, mes, ano;
};

int validarData(Data variavel)
{
    bool bisexto = 0;

    if (variavel.ano % 4 == 0)
    {
        bisexto = 1;
    }
    if (variavel.ano % 100 == 0 && variavel.ano % 400 == 0)
    {
        bisexto = 1;
    }
    else
    {
        bisexto = 0;
    }

    if (variavel.ano >= 0)
    {
        if (variavel.mes > 0 && variavel.mes <= 12)
        {
            if (variavel.dia > 0 && variavel.dia <= 31)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << "== Inicio ==\n\n";

    Data valorUsuario;

    cout << "Insira um ano: ";
    cin >> valorUsuario.ano;
    cout << "Insira um mes: ";
    cin >> valorUsuario.mes;
    cout << "Insira um dia: ";
    cin >> valorUsuario.dia;

    cout << validarData(valorUsuario);

    return 0;
}