#include <stdio.h>
#include <locale.h>
#include <math.h> 

int main() {
    setlocale(LC_ALL, "Portuguese"); // pra aceitar acentos

    int tipo;
    float comp, larg, area, iluminancia, fluxoTotal, qtdLamp;

    
    printf("Selecione o tipo de c�modo:\n1 - Quarto\n2 - Escrit�rio\n3 - Cozinha\nDigite a op��o desejada: ");
	scanf_s("%d", &tipo); // l� tipo de comomo

    printf("Digite o comprimento do c�modo (m): ");
	scanf_s("%f", &comp); // l� comprimento

    printf("Digite a largura do c�modo (m): ");
	scanf_s("%f", &larg); // l� largura


	area = comp * larg; // calcula �rea

    // define iluminacia conforme tipo
    if (tipo == 1)
        iluminancia = 150;
    else
        iluminancia = 300;

    // calcula  fluxo total necessario
    fluxoTotal = area * iluminancia / 0.8;

    // calcula qtd m�nima de l�mpadas
    qtdLamp = ceil(fluxoTotal / 800);

    
	printf("\nTipo de c�modo: "); // exibe tipo de c�modo
    if (tipo == 1)
        printf("Quarto");
    else if (tipo == 2)
        printf("Escritprio");
    else
        printf("Cozinha");

	printf(" (Ilumin�acia recomendada: %.0f lux)\n", iluminancia);  // mostra iluminancia recomendada
	printf("Area do comodo: %.2f m�\n", area); // mostra �rea do c�modo
	printf("Fluxo luminoso total necessario: %.2f l�mens\n", fluxoTotal); // mostra fluxo luminoso total necess�rio
	printf("Quantidade minima de lampadas recomndadas: %.0f\n", qtdLamp); // mostra quantidade m�nima de l�mpadas recomendadas

    return 0;
}
