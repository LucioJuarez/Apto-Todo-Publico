#include <iostream>
#include <stdlib.h>
#include <time.h>
#define Tope 5

using namespace std;

void GeneroVectorVacio(int boleto[]);
void CargoBoletaNumerosRandom(int boleto[]);
void Muestro(int boleto[]);

int main(){
    int boleto[Tope];
    GeneroVectorVacio(boleto);
    CargoBoletaNumerosRandom(boleto);
    Muestro(boleto);
}


void GeneroVectorVacio(int boleto[]){
    int indice = 0;
    for(indice; indice < Tope; indice++){
        boleto[indice] = 0;
    }
}

void CargoBoletaNumerosRandom(int boleto[]){
    int numero = 0;
    int indice;
    for(indice = 0; indice < Tope; indice++){
        numero = 1+rand()%(1-500);
        boleto[indice] = numero;
    }
}

void Muestro(int boleto[]){
    for(int indice = 0; indice < Tope; indice++){
        cout <<"[ "<<boleto[indice]<<" ]";
    }
}
