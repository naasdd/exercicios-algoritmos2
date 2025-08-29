#include <iostream>
#include <ctime>

using namespace std;

struct Horario
{
    int hora, minuto, segundo;
};

Horario gerarHora()
{
    Horario variavel;
    variavel.hora = rand() % 24;
    variavel.minuto = rand() % 60;
    variavel.segundo = rand() % 60;

    return variavel;
}

Horario somarHora(Horario variavel1, Horario variavel2)
{
    Horario resultado;
    resultado.hora = variavel1.hora + variavel2.hora;
    resultado.minuto = variavel1.minuto + variavel2.minuto;
    resultado.segundo = variavel1.segundo + variavel2.segundo;

    return resultado;
}

Horario corrigirHora(Horario variavel)
{
    while (variavel.segundo >= 60)
    {
        variavel.minuto += 1;
        variavel.segundo -= 60;
    }

    while (variavel.minuto >= 60)
    {
        variavel.hora += 1;
        variavel.minuto -= 60;
    }

    return variavel;
}

int main()
{
    srand(time(NULL));
    cout << "\n-- Início do programa --\n\n";

    Horario hora1 = gerarHora();
    Horario hora2 = gerarHora();

    Horario resultado = somarHora(hora1, hora2);
    resultado = corrigirHora(resultado);

    cout << "Hora 1 = " << hora1.hora << ":" << hora1.minuto << ":" << hora1.segundo << "\n";
    cout << "Hora 2 = " << hora2.hora << ":" << hora2.minuto << ":" << hora2.segundo << "\n";
    cout << "Resultado = " << resultado.hora << ":" << resultado.minuto << ":" << resultado.segundo << "\n";

    return 0;
}
