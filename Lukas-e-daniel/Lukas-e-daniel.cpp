#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    int i, j, A[3][5]; //matriz com 3 linhas e 5 colunas
    double soma[3]; //vetor da soma que tem 3 elementos
    for (i = 0; i < 3; i++) { //loop para gravação dos números na matriz
        for (j = 0; j < 5; j++) { //loop da coluna
            cout << "Informe os números da matriz"; //pedindo ao usuário para informar
            cin >> A[i][j]; //gravando dados na matriz
        }
    }

    for (i = 0; i < 3; i++) { //loop para gravação dos números na matriz
        for (j = 0; j < 5; j++) { //loop da coluna
        
            soma[i] = +A[i][j]; //somando os dados no vetor
        }
    }
    
    for (i = 0; i < 3; i++) { //impressão dos dados
        cout << soma[i];
    }

}