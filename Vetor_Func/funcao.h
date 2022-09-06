#include <cstdlib>
#include <iostream>
#include<stdio.h>
using namespace std;

double* criarObterValores(int n) {
	double* vet = new double(n);
	for (int i = 0; i < n; i++) {
		printf("Digite vetor da posicao %.d:", i + 1);
		cin >> vet[i];
	}
	return vet;
}

double multiplicarVetor(double vet, double extra) {
	double vet2;
	vet2 = vet * extra;
	return vet2;

}

double contarValor(double vet, double extra) {
		int cont = 0;
		if (vet == extra) {
			cont++;
		}
		return cont;
	}

double* escreverVetor(double* vet,int n) {
	for (int i = 0; i < n; i++) {
		cout << "Valor: " << vet[i] << "\t";
	}
	cout<<endl;
	return 0;

}


//destruirVeto