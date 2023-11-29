#include <iostream>

using namespace std;

class matematica{

    public:
        int A, B;
     
    void entrada(){
       cout<<"Dgiite dois numeros \n";
       cin>>A>>B;
    }

    int soma(){
        return A + B;
    }
    
    int mult(){
        return A * B;
    }
    
    int sub(){
        return A - B;
    }
    
    int divi(){
        return A / B;
    }
};

int main(int arg , char *argv[])
{
    matematica Obj;//criação do objeto.
    //Obj.A = 20;
   // cin>>Obj.A;
    Obj.entrada();
    cout<<Obj.soma()<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;

    return 0;
}





2) 

#include <iostream>

using namespace std;

class triangulo{
    
    public: int A,B,C;
    
    
    void Entrada(){
        cout<<"Informe os lados do triangulo: ";
        cin>>A>>B>>C;
    }
    
    
    int Verificar(){
     
     if(A<B+C && B<A+C && C<A+B){
         return true;
     }
     else{
         return false;
     }
    }
    
    int Tipo(){
        
        if(A==C && C==B){
            return 1;
        }
        else if (A==B && B!=C){
            return 2;
        }
        else{
            return 3;
        }
        
    }

};

int main(int arg , char *argv[])
{
        
        //declaração objeto
        triangulo Obj;
        Obj.Entrada();
        
        if(Obj.Verificar() == true){
            
            int tipoTriangulo = Obj.Tipo();
            
            
            if(tipoTriangulo == 1){
                cout<<"Equilatero";
            }
            else if(tipoTriangulo == 2 ){
                cout<<"Isoceles";
            }
            else{
                cout<<"Escaleno";
            }
        }
        else{
            cout<<"Nao e um triangulo";
        }
    
    return 0;
}


3)

