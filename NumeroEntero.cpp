#include <iostream>

using namespace std;

class CNumeroE {
//Declaracion de atributos
private:
    int valor;

//Declaracion de metodos
public:
    //Metodo constructor
    CNumeroE();
    //Metodos de la case
    int suma(int elementob);
    int resta(int elementob);
    int multiplicacion(int elementob);
    float division(float elementob);

    //Metodos get-set
    int getvalor();
    void setvalor(int e);
};

CNumeroE::CNumeroE(){
    valor=0;
};

int CNumeroE::getvalor(){
    return valor;
};

void CNumeroE::setvalor(int e){
    valor=e;
};

    int CNumeroE::suma(int elementob){
        return(valor + elementob);
    };
    int CNumeroE::resta(int elementob){
        return(valor - elementob);
    };
    int CNumeroE::multiplicacion(int elementob){
        return(valor * elementob);
    };
    float CNumeroE::division(float elementob){
        if(elementob!=0)
            return(valor / elementob);
        else{
            cout<<"error division por cero";
        };
    };

int main(){

cout<<"Hola mundo";

return 0;
}
