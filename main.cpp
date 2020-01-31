#include <iostream>
#include <string.h>

using namespace std;

class Ccorredor{

    //Atributos
    public:
        char nombre[25];
        int edad;
        char categoria[15];
        char sexo;
        int ranking;
        int numero;

    //Operaciones
    public:
        //Metodo contructor
        Ccorredor();
        //Ccorredor(char n[25], int e, char s)
        void inscibir_corredor(char n[25], int e, char s);
        void asignar_categoria();
        void asignar_ranking(int minu);
        void asignar_numero(int num);
};

Ccorredor::Ccorredor(){
    strcpy(nombre,"");
    edad=0;
    sexo=' ';
    numero=0;
}

//Ccorredor(char n[25], int e, char s)
void

void Ccorredor::inscribir_corredor(char n[25], int e, char s);

void Ccorredor::mostrarDatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    cout<<"Ranking: "<<ranking<<endl;
    cout<<"Numero: "<<numero<<endl;
}


int main(){

int contCorredor=0,e=0;
char n[25];
char s;

Ccorredor C1;
C1.mostrarDatos();

cout<<"Nombre del corredor: ";
cin>>n;
cout<<"Edad del corredor: ";
cin>>e;
cout<<"Sexo (F=Femenino, M=Masculino): ";
cin>>s;

C1.inscribir_corredor(n,e,s);
C1.asignar_categoria();
C1.asignar_numero(contCorredor++);
C1.mostrarDatos();

C1.asignar_ranking(45);
C1.mostrarDatos();

return 0;
}
