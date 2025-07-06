
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,  "Portuguese"); // para  aceitar os acentos

	int tipoComodo;
	float comp, larg, area, iluminancia, fluxoTotal, qtdLamp;

	// mostra as  op��es
	printf("Selecione o tipo de comodo:\n");
	printf("1 - Quarto\n");
	printf("2 - Escritotio \n");
	printf("3 - Cozinha\n ");
	printf("Digite a op��o desejada: ");
	scanf_s("%d", &tipoComodo );

	// verifica se digitou uma op��o valida
	if (tipoComodo < 1 || tipoComodo > 3) {
		printf("Op��o invalida! Encerrando...\n");
		return 1;
	}

	// pega as medidas do c�modo
	printf("Digite o comprimento do c�modo (m): ");
	scanf_s("%f", &comp);

	printf("Digite a largura do c�modo (m): ");
	scanf_s("%f", &larg);

	// calcula a �rea
	area = comp * larg;

	// define a ilumin�ncia conforme o tipo
	if (tipoComodo == 1) {
		iluminancia = 150;
	}
	else {
		iluminancia = 300;
	}

	// calcula o fluxo total necess�rio
	fluxoTotal = area * iluminancia / 0.8;

	// calcula a quantidade m�nima de l�mpadas (800 l�mens cada)
	qtdLamp = ceil(fluxoTotal / 800);

	// mostra os resultados
	printf("\nTipo de c�modo: ");
	if (tipoComodo == 1) printf("Quarto");
	else if (tipoComodo == 2) printf("Escrit�rio");
	else printf("Cozinha");

	printf(" (Ilumin�ncia recomendada: %.0f lux)\n", iluminancia);
	printf("�rea do c�modo: %.2f m�\n", area);
	printf("Fluxo luminoso total necess�rio: %.2f l�mens\n", fluxoTotal);
	printf("Quantidade m�nima de l�mpadas recomendadas: %.0f\n", qtdLamp);

	return 0;
}
