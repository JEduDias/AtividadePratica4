
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

	// verifica se digitou uma opção valida
	if (tipoComodo < 1 || tipoComodo > 3) {
		printf("Opção invalida! Encerrando...\n");
		return 1;
	}

	// pega as medidas do cômodo
	printf("Digite o comprimento do cômodo (m): ");
	scanf_s("%f", &comp);

	printf("Digite a largura do cômodo (m): ");
	scanf_s("%f", &larg);

	// calcula a área
	area = comp * larg;

	// define a iluminância conforme o tipo
	if (tipoComodo == 1) {
		iluminancia = 150;
	}
	else {
		iluminancia = 300;
	}

	// calcula o fluxo total necessário
	fluxoTotal = area * iluminancia / 0.8;

	// calcula a quantidade mínima de lâmpadas (800 lúmens cada)
	qtdLamp = ceil(fluxoTotal / 800);

	// mostra os resultados
	printf("\nTipo de cômodo: ");
	if (tipoComodo == 1) printf("Quarto");
	else if (tipoComodo == 2) printf("Escritório");
	else printf("Cozinha");

	printf(" (Iluminância recomendada: %.0f lux)\n", iluminancia);
	printf("Área do cômodo: %.2f m²\n", area);
	printf("Fluxo luminoso total necessário: %.2f lúmens\n", fluxoTotal);
	printf("Quantidade mínima de lâmpadas recomendadas: %.0f\n", qtdLamp);

	return 0;
}
