#include <iostream>

using namespace std;

int divisao(){


}

bool validarEntrada(int userInput){
    if(userInput < 0 ){
        return false;
    }

    return true;
}

int main(){
    system("chcp 65001");
    cout << "\n-- Transformar número inteiro em binário --\n\n";

    int userInput;
    cout << "Digite um número inteiro positivo: ";
    cin >> userInput;

    if (validarEntrada(userInput)){
        cout << "\nválido" << endl;
    }


    return 0;
}