#include <iostream>

using namespace std;

struct Horario
{
    int hora, minuto, segundo;
};

void gerarHora(Horario variavel){
    variavel.hora = rand() % 24;
    variavel.minuto = rand() % 60;
    variavel.segundo = rand() % 60;
}

Horario somarHora(Horario variavel1, Horario variavel2){
    Horario resultado;
    resultado.hora = variavel1.hora + variavel2.hora;
    resultado.minuto = variavel1.minuto + variavel2.minuto;
    resultado.segundo = variavel1.segundo + variavel2.segundo;

    
    return resultado;
}

Horario corrigirHora(Horario variavel){
    
    
}

int main(){
    cout<<"\n-- Início do programa --\n\n";

    return 0;
}