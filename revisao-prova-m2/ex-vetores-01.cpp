#include <iostream>
#include <vector>

using namespace std;

// O usuario digita o tamanho e os valores dos vetores
// O programa ordena os vetores
// O programa cria um terceiro vetor, juntando-os

void exibeVetor(std::vector<int> vetor)
{
    for (int i = 0; i < vetor.size(); i++)
    {
        if (i == (vetor.size() - 1))
        {
            cout << vetor[i];
            break;
        }
        else
        {
            cout << vetor[i] << ", ";
        }
    }
}

void ordenarVetor(std::vector<int> &vetor)
{
    for (int i = 0; i < vetor.size() - 1;)
    {
        if (vetor[i] > vetor[i + 1])
        {
            int temp = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = temp;

            i = 0;
        }
        else
        {
            i += 1;
        }
    }
}

int main()
{
    cout << "\n-- Inicio do Programa --\n\n";
    int tamVET1, tamVET2;

    cout << "\nDigite o tamanho do primeiro vetor: ";
    cin >> tamVET1;

    std::vector<int> vetor1(tamVET1);
    for (int i = 0; i < tamVET1; i++)
    {
        cout << "\nDigite um valor do vetor: ";
        cin >> vetor1[i];
    }
    cout << endl;
    cout << endl;

    ordenarVetor(vetor1);

    cout << "Vetor 1 = [";
    exibeVetor(vetor1);
    cout << "] \n";

    cout << "\nDigite o tamanho do segundo vetor: ";
    cin >> tamVET2;

    std::vector<int> vetor2(tamVET2);
    for (int i = 0; i < tamVET2; i++)
    {
        cout << "\nDigite um valor do vetor: ";
        cin >> vetor2[i];
    }
    cout << endl;
    cout << endl;

    ordenarVetor(vetor2);

    std::vector<int> vetor3(vetor1.size() + vetor2.size());
    for (int i = 0; i < vetor3.size(); i++)
    {
        if (i < vetor1.size())
        {
            vetor3[i] = vetor1[i];
        }
        else
        {
            vetor3[i] = vetor2[i - vetor1.size()];
        }
    }

    cout << "Vetor 1 = [";
    exibeVetor(vetor1);
    cout << "] \n";

    cout << "Vetor 2 = [";
    exibeVetor(vetor2);
    cout << "] \n";

    ordenarVetor(vetor3);

    cout << "Vetor 3 = [";
    exibeVetor(vetor3);
    cout << "] \n";

    return 0;
}