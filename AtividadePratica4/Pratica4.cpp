
#include <stdio.h>
#include <locale.h>
#include <math.h> // pra usar o ceil()

int main() {
	setlocale(LC_ALL, "Portuguese"); // para aceitar os acentos

	int tipoComodo;
	float comp, larg, area, iluminancia, fluxoTotal, qtdLamp;
