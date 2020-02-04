#include <iostream>
#include <stdio.h>

using namespace std;

class CCuenta{

//Atributos
private:
    int Numero_cuenta;
    float Saldo;

//Operaciones
public:
    //metodo constructor
    CCuenta(int num_c);

    void Retirar(float saldoRetirado);
    void Depositar(float saldoDepositado);
    void mostrarDatos(int Numero_cuenta, float saldo);

};

CCuenta::CCuenta(int num_c){
    Numero_cuenta=0;
    Saldo=0;
}

void CCuenta::Retirar(float saldoRetirado){
    Saldo = Saldo-saldoRetirado;
};
