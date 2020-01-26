#include <string.h>
#include <iostream>

using namespace std;

struct cliente{
char nombre[25];
char direccion[25];
char ciudad[20];
char provincia[20];

long int cp;
double saldo;
};

int main(){

struct cliente arreglo[5];

cout<<"Ingrese el nombre del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].nombre;
}

cout<<"\nIngrese la direccion del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].direccion;
}

cout<<"\nIngrese la ciudad del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].ciudad;
}

cout<<"\nIngrese la provincia del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].provincia;
}

for(int c=0;c<5;c++){
        cout<<"\nCliente "<<c+1<<endl;
        cout<<"Nombre: "<<arreglo[c].nombre<<endl;
        cout<<"Domicilio: "<<arreglo[c].direccion<<endl;
        cout<<"Ciudad: "<<arreglo[c].ciudad<<endl;
        cout<<"Provincia: "<<arreglo[c].provincia<<endl;
}

return 0;
}
