#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

struct Data
{
    int mes;
    int ano;
};

struct Gado
{
    int codigo;
    float leite, alim;
    Data nasc;
    bool abate;
};

Gado arrayGados[2000];

void criarDados()
{

    for (int i = 0; i < 2000; i++)
    {
        Gado temp;

        temp.codigo = i + 1;
        temp.leite = rand() % 100;
        temp.alim = rand() % 100;

        do
        {
            temp.nasc.ano = rand() % 2025;
            temp.nasc.mes = rand() % 12;
        } while (temp.nasc.ano <= 2010 || temp.nasc.mes == 0);

        if (2025 - temp.nasc.ano > 5 || temp.leite < 40 || (temp.leite <= 70 && temp.alim > 50))
        {
            temp.abate = 1;
        }
        else
        {
            temp.abate = 0;
        }

        arrayGados[i] = temp;
    }
}

void leiteTotalSemanal()
{
    int tamArray = sizeof(arrayGados);
    int tamanhoCada = sizeof(arrayGados[0]);

    int lenght_arrayGados = tamArray / tamanhoCada;


    int soma;
    for (int i = 0; i < lenght_arrayGados + 1; i++)
    {
        soma = soma + arrayGados[i].leite;
    }

    cout << "\n Essa semana, a fazenda produziu " << soma << " litros de leite!";
}

void alimentoTotalSemanal()
{

    int tamArray = sizeof(arrayGados);
    int tamanhoCada = sizeof(arrayGados[0]);

    int lenght_arrayGados = tamArray / tamanhoCada;


    int soma;
    for (int i = 0; i < lenght_arrayGados + 1; i++)
    {
        soma = soma + arrayGados[i].alim;
    }

    cout << "\n Essa semana, os gados consumiram " << soma << " quilos de alimento!";

}

int main()
{
    srand(time(NULL));
    system("CHCP 65001");

    cout << "\n\n-- Início do programa --";

    criarDados();

    int opcao;
    do
    {
        cout << "\n\n1 - Quantidade de leite produzido na semana\n";
        cout << "2 - Alimento total que sera consumido por semana\n";
        cout << "3 - Quantidade total de leite que vai ser produzido na semana apos o abate\n";
        cout << "4 - Alimento que sera consumido por semana apos o abate\n";
        cout << "5 - Numero de gados que vão para o abate\n";
        cout << "6 - Sair do programa\n";

        cout << "Selecione uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            leiteTotalSemanal();
            break;
        case 2:
            alimentoTotalSemanal();
            break;
        case 3:
            
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            cout << "Saindo do programa...\n";
            break;
        }

    } while (opcao != 6);

    return 0;
}