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
        temp.leite = rand() % 100;
        temp.alim = rand() % 100;

        do
        {
            temp.nasc.ano = rand() % 2025;
            temp.nasc.mes = rand() % 12;
        } while (temp.nasc.ano <= 2010 || temp.nasc.mes == 0);

        meu_arquivo << temp.codigo << ",";
        meu_arquivo << temp.leite << ",";
        meu_arquivo << temp.alim << ",";
        meu_arquivo << temp.nasc.ano << ",";
        meu_arquivo << temp.nasc.mes << ",\n";

        cout << temp.codigo << ",";
        cout << temp.leite << ",";
        cout << temp.alim << ",";
        cout << temp.nasc.ano << ",";
        cout << temp.nasc.mes << ",";
        cout << endl;

        arrayGados[i] = temp;
    }
    meu_arquivo.close();
    cout << "Dados gerados e gravados em ex6.txt";
}

void lerBaseDados()
{
}

int main()
{
    srand(time(NULL));
    cout << "-- Início do programa -- \n";

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
            criarDados();
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