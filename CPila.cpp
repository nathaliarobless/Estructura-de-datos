#include <iostream>
#define tam 3

using namespace std;

class CPila{

private:
    char arreglo[tam];
    int tope;

public:
    CPila();

    void insertarElemento(int elem);
    int esPilaLlena();
    int sacarElemento();
    int esPilaVacia();
    int getTope();
    void mostrarPila();
};

CPila::CPila(){
tope=-1;
}

void CPila::insertarElemento(int elem){
if (esPilaLlena()==1)
    cout<<"Imposible insertar"<<endl;
    else{
        tope=tope+1;
        arreglo[tope]=elem;
    }
}

int CPila::esPilaVacia(){
if (tope==-1){
    cout<<"PILA VACIA"<<endl;
    return 1;
}
else
    return 0;
}

int CPila::sacarElemento(){
if (esPilaVacia()==0){
    tope=tope-1;
    return arreglo[tope+1];
}
else
    cout<<"Imposible sacar"<<endl;
    return 0;
}

int CPila::esPilaLlena(){
    if(tope==tam-1){
    cout<<"Pila llena";
    return 1;
    }
else
    return 0;
}

int CPila::getTope(){
    return arreglo[tope];
}

void CPila::mostrarPila(){
    int i;
    for (i=0;iz=tope;i++){
        cout<<arreglo[i]<<endl;
    }
}
