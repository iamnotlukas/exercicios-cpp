1-)

#include <iostream>

using namespace std;

int main(){
    int a, b, c, soma;

    int *pont1, *pont2;

    cout<<"Digite o valor de a e b:";
    cin>>a>>b;
    
    pont1 = &a;
    pont2 = &b;

    cout << "Endereco de memoria a: " << pont1 << "\nEndereco de memoria b : " << pont2 << "\n";

    soma = (a + b);

    *pont1 = soma;

    cout << "Conteudo de pont1: " << pont1;

    return 0;
}

2-)
#include <iostream>

using namespace std;

int main(){
    int a = 1, b = 2, c = 3;
    int vetor[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};

    int *pt1, *pt2, *pt3, *vaux;

    pt1 = &a; 
    pt2 = &b;
    pt3 = &c;

    cout << "Endereco de memoria a: " << &a << "\nEndereco de memoria pt1: " << pt1;
    
    cout << "\nVariavel apontada por pt1: " << a;

    vaux = &vetor[1];

    cout << "\nVariavel apontada por vaux: " << vetor[1] <<"\n";
    cout << "\n";

    for (int i = 1; i < 10; i = i+2) {
        *vaux = *vaux + 10;
        cout << "O conteudo de v[" << i << "] = " << *vaux << endl;
        vaux = vaux + 2;
    }

    return 0;
}


