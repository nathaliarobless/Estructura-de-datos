#include <iostream>
#include <string.h>
#define tam 3

//Alumna: Grecia Nathalia Robles Soto
//2CM1

//cin = scanf (recibir valores)
//cout = printf (imprime valores)

typedef struct corredor{
    char nombre[25];
    int edad;
    char sexo;
    char categoria[20];
};

using namespace std;

int main(){
//arreglo de corredores
    corredor C[tam];
//variable para el ciclo
    int i;
//ciclo para obtener datos de corredores
    for(i=0;i<tam;i++){
        cout<<"\nDa nombre: ";
        cin>>C[i].nombre;
        cout<<"Da edad: ";
        cin>>C[i].edad;
        cout<<"Da sexo (F-Femenino, M-Masculino): ";
        cin>>C[i].sexo;
//si <25 categoria = juvenil
//si <40 categoria =senior
//si categoria = veterano
        if(C[i].edad<=25)
            strcpy(C[i].categoria,"Juvenil");
        else if(C[i].edad<=40)
            strcpy(C[i].categoria,"Senior");
        else
            strcpy(C[i].categoria,"Veterano");
    }

//Mostrar datos de corredores por categoria
    cout<<"\nCorredores categoria Juvenil";
    for(i=0;i<tam;i++){
        if(strcmp(C[i].categoria,"Juvenil")==0)
            cout<<"\nNombre: "<<C[i].nombre<<"\nEdad: "<<C[i].edad;
    }

    cout<<"\n\nCorredores categoria Senior";
    for(i=0;i<tam;i++){
        if(strcmp(C[i].categoria,"Senior")==0)
            cout<<"\nNombre: "<<C[i].nombre<<"\nEdad: "<<C[i].edad;
    }

    cout<<"\n\nCorredores categoria Veterano";
    for(i=0;i<tam;i++){
        if(strcmp(C[i].categoria,"Veterano")==0)
            cout<<"\nNombre: "<<C[i].nombre<<"\nEdad: "<<C[i].edad;
    }

return 0;
}
