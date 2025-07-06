
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,  "Portuguese"); // para  aceitar os acentos

	int tipoComodo;
	float comp, larg, area, iluminancia, fluxoTotal, qtdLamp;

	// mostra as  opções
	printf("Selecione o tipo de comodo:\n");
	printf("1 - Quarto\n");
	printf("2 - Escritotio \n");
	printf("3 - Cozinha\n ");
	printf("Digite a opção desejada: ");
	scanf_s("%d", &tipoComodo );
