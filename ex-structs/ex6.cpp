#include <iostream>

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


void lerBaseDados(){

    
}



int main()
{
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
            cout<<"Saindo do programa...\n";
            break;
        }

    } while (opcao != 6);

    return 0;
}