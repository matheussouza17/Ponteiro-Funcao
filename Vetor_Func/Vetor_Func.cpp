#include <iostream>
#include <cmath>
#include<stdio.h>
#include<iomanip>
#include "funcao.h"

using namespace std;
int main() {
    int n=0,cont=0;
    double extra = 0;

    printf("Digite numero de termos: ");
    cin >> n;

    double* vet = criarObterValores(n);
    

    cout << "Digite numero extra:";
    cin >> extra;
    
    //Iniciando VETOR SOMA
    double* vetSoma = new double(n);

    
    for (int i = 0; i < n; i++) {
        vetSoma[i] = multiplicarVetor(vet[i], extra);
    }

    

    for (int i = 0; i < n; i++) {
        cont += contarValor(vet[i], extra);
    }
   
    escreverVetor(vet,n);
    escreverVetor(vetSoma, n);

    //for (int i = 0; i < n; i++) cout << cont;


}