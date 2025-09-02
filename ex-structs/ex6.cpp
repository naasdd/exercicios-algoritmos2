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

void criarDados()
{
    ofstream meu_arquivo;
    meu_arquivo.open("ex6.txt");
    Gado arrayGados[2000];

    for (int i = 0; i < 2000; i++)
    {
        Gado temp;
        temp.codigo = rand() % 5000;
        temp.leite = rand() % 1000;
        temp.alim = rand() % 1000;

        temp.nasc.ano = rand() % 2025;
        do
        {
            temp.nasc.ano = rand() % 2025;
        } while (temp.nasc.ano <= 2010);

        temp.nasc.mes = rand() % 12;

        
        arrayGados[i] = temp;
    }
}

void lerBaseDados()
{
}

int main()
{
    srand(time(NULL));
    cout << "-- Início do programa";

    int opcao;
    do
    {
        cout << "1 - Quantidade de leite produzido na semana\n";
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

            break;
        case 2:

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