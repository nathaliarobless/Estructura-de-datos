#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define tam 8
#define tam1 10
#define num 40 // Numero de cuadritos en el laberinto
/* PROGRAMA DE IMPLEMENTACION DE ALGORITMOS RECURSIVOS
   Grecia Nathalia Robles Soto
   1CM1 - 2020670263
   1.- VUELTA DEL CABALLO
   2.- TORRES DE HANOI
   3.- EL LABERINTO
*/

using namespace std;

//Funciones para la vuelta del caballo
int iter = 0;
void carga_tablero(int arreglo[][tam]){
    int j,i;
    for(j=0; j<tam; j++){
        for(i=0; i<tam; i++)
            (arreglo[j][i]=0);
    }
}

void mostrar(int arreglo[][tam]){
    int j,i;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            cout<<" "<<arreglo[j][i]<<" |";
            cout<<endl<<endl;
    }
}

int final (int arreglo[][tam]){
    int j,i;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(arreglo[j][i]==0){
                return 0;
            }
        }
    }
    return 1;
}

void recursivo(int tab[][tam], int numero, int x, int y){
    int ejex[]={-1,-2,-2,-1,1,2,2,1};
    int ejey[]={-2,-1,1,2,2,1,-1,-2};
    int nev1=0;
    int nev2=0;
    int indice=0;


    while (indice<8 && final(tab)!=5){
        nev1=ejex[indice]+x;
        nev2=ejey[indice]+y;
        if((tab[nev1][nev2]==0) && (nev1<tam && nev1>=0 && nev2<tam && nev2>=0)){
            tab[nev1][nev2]=numero;
            if(numero!=tam*tam){
                recursivo(tab,numero+1,nev1,nev2);
            }
        }
        indice+=1;
        iter+=1;
    }
    if(final(tab)!=1){
        tab[x][y]=0;
    }
}

//Función para la torre de hanoi
void hanoi(int nume, char A, char B, char C){
    if(nume == 1){
        cout<<"Mueva el bloque "<<nume<<" desde "<<A<<" hasta "<<C<<endl<<endl;
    }
    else{
        hanoi(nume-1, A, B, C);
        cout<<"Mueva el bloque "<<nume<<" desde "<<A<<" hasta "<<C<<endl<<endl;
        hanoi(nume-1, B, C, A);
    }
}

//Funciones para el laberinto
int columna=tam1-1;
int fila=tam1-1;
int optima=(tam1*tam1+1); // Esta es la mejor ruta
int iter2;

void carga_laberinto(int arreglo[][tam1]){
    int j,i;
    for(j=0; j<tam1; j++){
        for(i=0; i<tam1; i++)
            arreglo[j][i]=0;
    }
}

void mostrarLab(int arreglo[][tam1]){
    int j,i;
    for(i=0; i<tam1; i++){
        for(j=0; j<tam1; j++)
        cout<<" |"<<arreglo[j][i]<<endl<<endl;
    }
}

char cambioAscii(char numero){
    char aux=numero;
    return aux;
}

void disenoLab(int arreglo[][tam1]){
    int j,i;
    for(i=0; i<tam1*3+2; i++)
         cout<<cambioAscii(205);
         cout<<endl<<cambioAscii(186);
     for (i=0; i<tam1; i++){
         for (j=0; j<tam1; j++){
             if (arreglo[j][i] == -1)
             cout<<cambioAscii(219)<<cambioAscii(219)<<cambioAscii(219);
             if (arreglo[j][i] == 0)
             cout<<"   ";
             if (arreglo[j][i] != 0 && arreglo[j][i] != -1)
             cout<<" "<<cambioAscii(15)<<" ";
             //if(i == columna && j == fila)
             //cout<<" "<<cambioAscii<<" ";
         }
         cout<<cambioAscii(186)<<endl<<cambioAscii(186);
     }
     for (i=0; i<tam1*3+1; i++)
     cout<<cambioAscii(205);
}

void aleatorio(int arreglo[][tam1]){
     int i, x, y;
     srand(time(NULL)); //genera numeros aleatorios
     for (i=0; i<num; i++){
         x = rand()%tam1;
         y = rand()%tam1;
         if(x != columna || y != fila)
         arreglo[x][y] = -1;
     }
}

void traspaso(int antes[][tam1], int despues[][tam1]){
     int j,i;
     for (i=0; i<tam1; i++){
         for (j=0; j<tam1; j++){
             despues[j][i] = antes[j][i];
         }
     }
}

void recusividadLab(int tab[][tam1], int tab_aux[][tam1],int casilla, int x, int y){
     int arrx[]={1,0,-1,0};//movimiento
     int arry[]={0,1,0,-1};

     int indice = 0;//vector
     int newx, newy;

     while(indice <= 3){
           newx= x+arrx[indice];
           newy= y+arry[indice];

           //getchar();
           if ((tab[newx][newy] == 0) && (newx < tam1 && newx >= 0 && newy < tam1 && newy >= 0)&& (casilla < optima)){
               tab[newx][newy] = casilla;
               //system("cls");  //Este es por si se quieren ver todas las opciones
               //disenoLab(tab);
               if (columna == newx && fila == newy){//encontro la solucion
                   system("cls");
                   disenoLab(tab);

                   if (casilla < optima){//solo la mejor ruta
                       traspaso(tab,tab_aux);
                       optima = casilla;
                   }
               }

               recusividadLab(tab,tab_aux,casilla+1,newx,newy);
           }
           indice+=1;
           iter2 = iter2 + 1;
     }//while
     tab[x][y]= 0;
}

int main(){

    int tablero[tam][tam];
    int columna;
    int fila=0;
    int n;
    int tableroLab[tam1][tam1];
    int tablero_aux[tam1][tam1];
    int j,i;

    int op;

    cout<<"Programadora: "<<endl<<"Grecia Nathalia Robles Soto"<<endl<<"1CM1 - 2020670263"<<endl;
    do{
	  cout<<endl<<endl<<"Menu Principal Algoritmos Recursivos"<<endl;
	  cout<<"1.-Vuelta del caballo"<<endl;
	  cout<<"2.-Torre de Hanoi"<<endl;
	  cout<<"3.-Laberinto"<<endl;
	  cout <<"4.-Salir"<<endl;
      cout<<"Opcion a elegir:";
	  cin>>op;
	  switch (op){
	  	case 1:{
	  	    cout<<endl<<"| LA VUELTA DEL CABALLO |"<<endl<<endl;
	  	    cout<<"Ingresa la columna en la que quieres empezar el recorrido: ";
	  	    //Solo funciona con 0, 3, 4, 7
            cin>>columna;

	  		carga_tablero(tablero);
            tablero[columna][fila]=1;
            recursivo(tablero,2,columna,fila);
            cout<<"- Solucion -"<<endl<<"Columna: "<<columna<<" | Fila: "<<fila<<" | Numero de iteraciones: "<<iter<<endl<<endl;
            mostrar(tablero);

            break;
        }

        case 2:{
            cout<<endl<<"| TORRE DE HANOI |"<<endl<<endl;
            cout<<"Los postes son A B C"<<endl;
            cout<<"Ingresa el numero de discos: ";
            cin>>n;
            cout<<endl;
            hanoi(n,'A','C','B');

		    break;
	  }
	    case 3:{
	        cout<<endl<<"| LABERINTO |"<<endl<<endl;
	        carga_laberinto(tableroLab);
            carga_laberinto(tablero_aux);
            aleatorio(tableroLab);
            cout<<endl<<"Por donde quieres iniciar el recorrido?"<<endl;
            disenoLab(tableroLab);
            cout<<"Columna: ";
            cin>>j;
            cout<<"Fila: ";
            cin>>i;
            cout<<endl;
            tableroLab[j][i]=1;
            recusividadLab(tableroLab,tablero_aux,2,j,i);
            disenoLab(tablero_aux);

		    break;
	  }

   }

}while (op!=4);

return 0;
}
