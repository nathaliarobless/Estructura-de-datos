#include <string.h>
#include <iostream>

using namespace std;

int contarVocales (char *cad){
    int cont=0;

    while(*cad){
    switch(*cad){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cont=cont+1;
    }
    *cad++;
    }
    return cont;
}

int main(){

    char cadena[80];

    cout<<"Programa para contar vocales en una cadena"<<endl;
    cout<<endl<<"Ingresa cadena: ";
    cin.getline(cadena,80);
    cout<<"La cadena tiene: "<<contarVocales(cadena)<<" vocales"<<endl;

return 0;
}
